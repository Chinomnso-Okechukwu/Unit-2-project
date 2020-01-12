#include <stdio.h>

int main(void) {
  // define variables
  int i,num,factorial=1;
  printf("Enter number\n");
  scanf("%d",&num);
  for (i=1;i<=num;i++){
      factorial = factorial*i;
  }
  // print result
  printf("The Factorial of %d is %i",num,factorial);
  return 0;
}
