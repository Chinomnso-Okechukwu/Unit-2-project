#include <stdio.h>

int main(void) {
  int x,y;
  printf("enter the values of x,y\n");
  scanf("%d%d",&x,&y);
  if (x>0 && y>0)
  printf("The coordinate point (%d,%d) lies in the first quadrant",x,y);
  if (x<0 && y>0)
  printf("The coordinate point (%d,%d) lies in the second quadrant",x,y);
  if (x<0 && y<0)
  printf("The coordinate point (%d,%d) lies in the third quadrant",x,y);
  if (x>0 && y<0)
  printf("The cooordinate point (%d,%d) lies in the fourth quadrant",x,y);
  return 0;
}
