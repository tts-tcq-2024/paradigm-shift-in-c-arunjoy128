#include <stdio.h>
#include <assert.h>
//char temperatureStaus[15]="Not InRange";
int parameterInRange(float parameter, float lowerLimit, float higherLimit)
{
return parameter >= lowerLimit && parameter <= higherLimit;
}

int temperatureIsOk(float temperature) 
{
    return parameterInRange(temperature, 0, 45);
}
int socIsOk(float soc)
{
    return parameterInRange(soc, 20, 80);
}
int chargeRateIsOk(float chargeRate)
{
   return parameterInRange(chargeRate, 0.5, 80);
}

int batteryIsOk(float temperature, float soc, float chargeRate)
{
  if((temperatureIsOk(temperature)+socIsOk(soc)+chargeRateIsOk(chargeRate))==3)
  {
  return 1;
  }
   else
  {
  return 0;
  }
}

int main() 
{
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
  assert(!chargeRateIsOk(0.9));
}
