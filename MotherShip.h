#pragma once
#include "AbstractState.h"
#include "stdafx.h"
#include <vector>




class MotherShip :
    public Ship 
{
    MotherShip(const Ship&) {};
    std::vector<Ship*> MotherFleet;

    // Add Ship to fleet
    void AddShip(Ship* ShadowShip) {
        MotherFleet.push_back(ShadowShip);    
    };
    // Override the Heartbeat
    void Heartbeat(float delta) {

        if()
    }


};

