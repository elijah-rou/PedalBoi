#include "daisysp.h"
#include "daisy_seed.h"

using namespace daisysp;
using namespace daisy;

static DaisySeed board;

// float clip(float input){
//     // Clip the input to either 1 or -1
//     input = input > 1.f ? 1.f : input;
//     input = input < -1.f ? -1.f : input;
//     return input;
// }

float softClip(float input){
	if (input > 0){
		return 1 - expf(-input);
    }
    else{
	    return -1 + expf(input);
    }
}

float pregain = 5 + 1.2;
float gain = 50 + 1.2;
float drywet = 0.01;

bool bypass = false;

static void AudioCallback(float **input, float **output, size_t size){
    //bypass = ? !bypass : bypass;

    for(size_t i = 0; i < size; i++){
        for(int channel = 0; channel < 2; channel++){
            input[channel][i] *= pregain;
            float wet = input[channel][i];

            if(!bypass){
                wet *= gain;
                wet = softClip(wet);
            }

            output[channel][i] = wet * drywet + input[channel][i] * (1 - drywet);
        }
    }
        
}

// static void AudioCallback(float *in, float *out, size_t size)
// {
//     for(size_t i = 0; i < size; i += 2)
//     {
//         out[i] = in[i];
//     }
// }

int main(void){
    board.Configure();
    board.Init();
    dsy_tim_start();
    board.SetAudioBlockSize(48);

    //board.adc.Start();
    board.StartAudio(AudioCallback);

    for(;;){
        dsy_system_delay(6);
    }
}


