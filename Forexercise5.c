// This program finds the sum of the series 1+11+111+1111+..n terms.
#include <stdio.h>

int main(void) {
  // define the variables
  int n,i;
  long sum=0;
  long int t=1;
  printf("Enter the number of terms\n");
  scanf("%d",&n);
  for (i=1;i<=n;i++){
    // this prints each term of the series
    printf("%ld ",t);
    if (i<n)
    {
      // this prints the addition sign beside each term
      printf("+ ");

    }
    // this calculates the sum
    sum=sum+t;
    // this calculates the next term in the series
    t=(t*10)+1;
  }
  // show the sum of the series
  printf("\nThe sum is: %ld",sum);
  return 0;
}
