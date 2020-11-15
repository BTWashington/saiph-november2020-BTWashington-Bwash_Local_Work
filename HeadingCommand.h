#pragma once
#include "BaseCommand.h"
class HeadingCommand :
    public BaseCommand
{
private:
    float _heading = 0.0f;
public:
    float GetHeading() { return _heading; }
    void SetHeading(float value) { _heading = value; }

    void Execute() { SetHeading(_heading); }

};

