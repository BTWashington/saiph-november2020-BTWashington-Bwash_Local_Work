#pragma once
#include "BaseCommand.h"
class Velocity :
    public BaseCommand
{
    float maxVelocity = 0.0f;
    float minVelocity = 0.0f;

    // Accessors and Mutators
    float MaxVelocity() { return maxVelocity; }
    float MinVelocity() { return minVelocity; }

    void MaxVelocity(float maxVel) { maxVelocity = maxVel; }
    void MinVelocity(float minVel) { minVelocity = minVel; }
    

};

