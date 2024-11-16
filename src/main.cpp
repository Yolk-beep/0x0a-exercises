#include <iostream>
#include "led.h"
#include "batch.h"

int main()
{
  Batch pepe = Batch(1);
  pepe.addLed(1,2.0,3.0);
  pepe.addLed(1,2.0,3.0);
  pepe.addLed(1,2.0,3.0);
  std::cout << "Number of Leds: " << pepe.noOfLeds() <<" Average forward Voltage: " << pepe.averageForwardVoltage()<< " Standarddeviation: " << pepe.standarddeviationForwardVoltage();
  return 0;
}
