#include <stdio.h>
// This program displays the n terms of the harmonic series and their sum.
int main(void) {
  // define variables
  int i,n;
  float sum = 0;
  printf("Enter the number: \n");
  scanf("%d",&n);
  for (i=1;i<=n;i++){
    sum=sum +(float)1/i;
    if (i==1)
    printf("1 +");
    else if (i==n)
    printf(" 1/%d \n",i);
    else
    printf(" 1/%d +",i);
  }
  // print solution
  printf("Sum of series upto %d terms: %f",n,sum);
  return 0;
}
