#include "daisysp.h"
#include "daisy_seed.h"

using namespace daisysp;
using namespace daisy;

static DaisySeed board;

float clip(float input){
    // Clip the input to either 1 or -1
    input = input > 1.f ? 1.f : input;
    input = input < -1.f ? -1.f : input;
    return input;
}

float softClip(float input){
    // Soft-clip the input to value close to 1
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

static void AudioCallback(float **input, float **output, size_t size){
    // Signal Processing Function, called on input signal
    for(size_t i = 0; i < size; i++){ // For every input
        for(int channel = 0; channel < 2; channel++){ // for each channel
            // Apply gain
            input[channel][i] *= pregain;
            float wet = input[channel][i];
            wet *= gain;
            wet = Clip(wet);
            // Set output
            output[channel][i] = wet * drywet + input[channel][i] * (1 - drywet);
        }
    }
        
}

int main(void){
    // Setup board
    board.Configure();
    board.Init();
    dsy_tim_start();
    board.SetAudioBlockSize(48);

    // Start audio processing
    board.StartAudio(AudioCallback);

    // Loop forever
    for(;;){
        dsy_system_delay(6);
    }
}


