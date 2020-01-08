#include <stdio.h>
 


int main(void) {
   int year;
  printf("Enter the year\n");
  scanf("%d",&year);
  if (( year % 4) == 0){
    printf(" %d is a leap year",year);
  }
      else {
      printf("%d is not a leap year",year);
      }
}
