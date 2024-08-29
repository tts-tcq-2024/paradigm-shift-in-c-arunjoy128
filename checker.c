#include <stdio.h>
#include <assert.h>

int temperatureIsOk(float temperature) 
{
return (temperature>=0&&temperature<=45);
   printf("Temperature out of range!\n");
}
int socIsOk(float soc)
{
return (soc>=20 && soc<=80);
}
int chargeRateIsOk(float chargeRate)
{
return (chargeRate<=0.8);
}

int batteryIsOk(float temperature, float soc, float chargeRate)
{
  if(!temperatureIsOk(temperature))
  {
  return 0;
  }
  if(!socIsOk(float soc))
  {
  printf("State of Charge out of range!\n");
  return 0;
  }
  if(!chargeRateIsOk(float chargeRate)
  {
  printf("Charge Rate out of range!\n");
  return 0;
  }
return 1;
}

int main() 
{
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
