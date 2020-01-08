#include <stdio.h>

int main(void) {
  int age;
  printf("enter age\n");
  scanf("%d",&age);
  if ( age >= 18)
  printf("Congratulations!You are eligible for casting your vote");
  else
  printf("Sorry,You are not eligible for casting your vote");
  return 0;
}
