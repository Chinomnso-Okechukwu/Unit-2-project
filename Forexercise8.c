#include <stdio.h>

int main(void) {
  // define the variables
  int n,sum=0,R;
  // asks user for the number to be reversed
  printf("Enter the number\n");
  // reads the number entered from the user
  scanf("%d",&n);
  while (n>0){
  R=n%10;
  sum=sum*10+R;
  n=n/10;
}
// shows the reversed number
printf("%d",sum);
  return 0;
}
