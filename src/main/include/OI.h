#ifndef OI_H
#define OI_H

#include "Robotmap.h"
#include <frc/Joystick.h>

class OI
{
public:
    OI oi(int port);
    double getLimitedX();
    double getLimitedY();
    bool isTriggerPressed();
    frc::Joystick stick1{Robotmap::JOYSTICK1PORT};
};

#endif