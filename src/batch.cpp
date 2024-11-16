#include "batch.h"
#include <iostream>
#include "led.h"
#include <cmath>

Batch::Batch(long id)
{
    id_ = id;
}
void Batch::addLed(long id, double forwardVoltage, double current)
{
    Led LedAdd = Led(id, forwardVoltage, current);
    Leds.push_back(LedAdd);
}
int Batch::noOfLeds()
{
    return Leds.size();
}
double Batch::averageForwardVoltage()
{
    if (noOfLeds()==0) return 0;
    double x = 0;
    for (size_t i = 0; i < Leds.size(); i++)
    {
        x += Leds[i].getForwardVoltage();
    }
    return x / noOfLeds();
}
double Batch::standarddeviationForwardVoltage()
{
    if (noOfLeds()<2) return 0;
    double sum = 0;
    for (size_t i = 0; i < Leds.size(); i++)
    {
        sum += pow((Leds[i].getForwardVoltage() - averageForwardVoltage()), 2);
    }
    return sqrt(sum / (noOfLeds() - 1));
}