#include "led.h"
#include <iostream>
#include <string>

Led::Led(long id, double forwardVoltage, double current)
    : id_(id), forwardVoltage_(forwardVoltage), current_(current)
{
}
double Led::getId()
{
    return id_;
}
double Led::getForwardVoltage()
{
    return forwardVoltage_;
}
double Led::getCurrent()
{
    return current_;
}
std::string Led::toString()
{
    return std::to_string(id_) + std::to_string(forwardVoltage_) + std::to_string(current_);
}
