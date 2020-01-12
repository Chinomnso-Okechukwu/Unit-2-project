#include <stdio.h>

int main(void) {
  int num,i,cube;
  for (int i=0;i<5;i++){
     printf("Enter a number\n");
     scanf("%d",&num);
     // calculate cube
     cube = num*num*num;
     // show result
      printf("Number is :%d and cube of the %d is : %d\n",num,num,cube);
  }
  return 0;
}
