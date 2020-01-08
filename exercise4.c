#include <stdio.h>

int main(void) {
  int number1,number2,number3;
  printf("Enter three numbers\n");
  scanf("%d%d%d",&number1,&number2,&number3);
  if (number1 > number2){
   if (number1 > number3){
      printf("the first number is the greatest among three");
    }else {
      printf("the third number is the greatest among three");
    }
  }else if (number2 > number3)
  {
   printf("the second number is the greatest among three");
  } 
  else {
       printf("the third number is the greatest among three");
    }
  return 0;

}
