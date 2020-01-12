// This program calculates and prints the electricity bill of a given customer.
#include <studio.h>

int main() {
 int a, cost=0,unitcost,surchage=0,total=0;
 char b;
 float c;
printf("Please enter your ID number\n"); 
scanf("%d", &a);
 printf("Please enter your name\n");
 scanf("%c", &b);
   printf("Please enter the unit consumed\n");
   scanf("%f", &c);
   
if (c>=0 && c<200){
  cost=12/10*c;
  unitcost=12/10;
  }
  
if (c>=200 && c<400){
  cost=15/10*c;
  unitcost=15/10;
  }
  
if (c>=400 && c<600){
  cost=18/10*c;
  unitcost=18/10;
  }
 
if (c>=600){
  cost=2*c;
  unitcost=2;
 
if (cost>400){
  surchage=15/100*cost;
  total=cost+surchage;
  }
  
 printf("Customer ID: %d"\n, a);
 printf("Customer Name: %c\n", b);
 printf("Energy Customed: %f units\n" c);
 printf("Rate charged: %d yen per unit, total of %d yen\n",unitcost, cost);
 printf("Surchage: %d yen\n", surcharge);
 printf("Total Amount Due: %d yen\n", cost);
 return 0;
  
