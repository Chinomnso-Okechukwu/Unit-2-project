#include <stdio.h>

int main(void) {
  int angle1,angle2,angle3;
  printf("Enter the three angles\n");
  scanf("%d%d%d",&angle1,&angle2,&angle3);
  if (angle1+angle2+angle3 == 180 )
  printf("The triangle is valid");
  else 
  printf("The triangle is not valid");
  return 0;
}
