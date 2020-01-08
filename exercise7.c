#include <stdio.h>

int main(void) {
  int temperature;
  printf("enter the temperature\n");
  scanf("%d",&temperature);
  if (temperature < 0)
  printf("Freezing weather");
  if (temperature > 0 && temperature < 10)
  printf("Very Cold weather");
  if (temperature > 10 && temperature < 20)
  printf("Cold weather");
  if (temperature > 20 && temperature < 30)
  printf("Normal in Temp");
  if (temperature > 30 && temperature < 40)
  printf("Its Hot");
  if (temperature >= 40)
  printf("Its Very Hot");
  return 0;
}
