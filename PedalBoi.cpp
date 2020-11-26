#include "daisysp.h"
#include "daisy_seed.h"

using namespace daisysp;
using namespace daisy;

DaisySeed board;

float clip(float input){
    // Clip the input to either 1 or -1
    input = input > 1.f ? 1.f : input;
    input = input < -1.f ? -1.f : input;
    return input;
}

float pregain = 10 + 1.2;
float gain = 100 + 1.2;
float drywet = 1;

bool bypass = false;

static void AudioCallback(float **input, float **output, size_t size){
    //bypass = ? !bypass : bypass;

    for(size_t i = 0; i < size; i++){
        input[0][i] *= pregain;
        float wet = input[0][i];

        if(!bypass){
            wet *= gain;
            wet = clip(wet);
        }

        output[0][i] = wet * drywet + input[0][i] * (1 - drywet);
    }
}

int main(void){
    board.Configure();
    board.Init();
    dsy_tim_start();

    //board.adc.Start();
    board.StartAudio(AudioCallback);
    board.SetAudioBlockSize(48);

    for(;;){
        dsy_system_delay(6);
    }
}


