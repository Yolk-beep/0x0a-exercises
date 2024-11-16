#ifndef LED_H
#define LED_H
#include <string>

class Led
{
public:
    Led(long id, double forwardVoltage, double current);
    double getId();
    double getForwardVoltage();
    double getCurrent();
    std::string toString();
private:
    long id_;
    double forwardVoltage_;
    double current_;
};
#endif