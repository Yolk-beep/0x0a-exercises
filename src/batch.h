#ifndef BATCH_H
#define BATCH_H
#include <iostream>
#include <vector>
#include "led.h"

class Batch
{
private:
    long id_;
    std::vector<Led> Leds;
public:
    Batch(long id);
    void addLed(long id, double forwardvoltage, double current);
    double standarddeviationForwardVoltage();
    int noOfLeds();
    double averageForwardVoltage();
};

#endif