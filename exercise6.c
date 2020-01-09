#include <stdio.h>

int main(void) {
  int MathsMark, PhysicsMark, ChemMark;
  printf("Enter the MathMark, PhysicsMark, ChemMark\n");
  scanf("%d%d%d",&MathsMark,&PhysicsMark,&ChemMark);
  if (MathsMark+PhysicsMark+ChemMark >= 180 || MathsMark+PhysicsMark >= 140)
  printf("Candidate is eligible for admission");
  else
  printf("Candidate is not eligble for admission");
  return 0;
}
