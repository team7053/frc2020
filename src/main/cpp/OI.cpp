#include "OI.h"

double OI::getLimitedX()
{
    double limitedX = (((((OI::stick1.GetRawAxis(3) * (-1)) + 1) / 4) + 0.65) * OI::stick1.GetX());
    return limitedX;
}
double OI::getLimitedY()
{
    double limitedY = (((((OI::stick1.GetRawAxis(3) * (-1)) + 1) / 4) + 0.65) * OI::stick1.GetY());
    return limitedY;
}
bool OI::isTriggerPressed()
{
    return stick1.GetRawButton(1);
}