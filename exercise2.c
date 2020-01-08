#include <stdio.h>

int main(void) {
  int number;
  printf("enter number\n");
  scanf("%d",&number);
  if (number >= 0)
  printf("%d is a positive number", number);
  else
  printf("%d is a negative number", number);
  return 0;
}
