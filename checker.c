#include <stdio.h>
#include <assert.h>

int temperatureIsOk(float temperature) 
{
if (temperature>=0&&temperature<=45)
{
   printf("Temperature within range!\n");
   return 1;
}
else
{
   printf("Temperature out of range!\n");
   return 0;
}
}
int socIsOk(float soc)
{
return (soc>=20 && soc<=80);
    printf("State of Charge out of range!\n");
}
int chargeRateIsOk(float chargeRate)
{
return (chargeRate<=0.8);
}

int batteryIsOk(float temperature, float soc, float chargeRate)
{
  if((temperatureIsOk(temperature)+socIsOk(soc)+chargeRateIsOk(chargeRate))==3)
  {
  return 0;
  }
 /* if(!socIsOk(soc))
  {
  printf("State of Charge out of range!\n");
  return 0;
  }
  if(!chargeRateIsOk(chargeRate))
  {
  printf("Charge Rate out of range!\n");
  return 0;
  }*/
return 1;
}

int main() 
{
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
