#include <stdio.h>

int main(void) {
  int side1,side2,side3;
  printf("Enter the values of the three sides\n");
  scanf("%d%d%d",&side1,&side2,&side3);
  if (side1 == side2){
   if (side1 == side3){
   printf("This is an equilateral triangle");}
   else{
     printf("This is an isoceles triangle");
   }
  }else if (side1 == side3){
    printf("This is an isoceles triangle");
  }
   else{
    printf("This is a scalene triangle");
   }
     return 0;
}
