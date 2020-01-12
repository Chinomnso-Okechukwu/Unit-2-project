#include <stdio.h>

int main(void) {
  // define variables
  int i,n,sum=0;
  float ave;
  // ask for the numbers
  for (int i=0;i<10;i++){
      printf("Enter a number\n");
      scanf("%d", &n);
       // calculate addition
    sum +=n;
  }
  ave = sum/10.0;
  // show result
  printf("The addition of the 10 numbers is %d\n",sum);
  // calculate ave
  printf("The average of the 10 numbers is %f",ave);
}
