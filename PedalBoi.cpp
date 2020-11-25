// Based of Daisy Petal Code https://github.com/electro-smith/DaisyExamples/blob/master/petal/Distortion/Distortion.cpp
#include "daisysp.h"

using namespace daisysp;

float hardClip(float input){
    // Clip the input to either 1 or -1
    input = input > 1.f ? 1.f : input;
    input = input < -1.f ? -1.f : input;
    return input
}

float softClip(float input){
    // 
    return input > 0 ? 1 - expf(-input) : -1 + expf(input)
}


