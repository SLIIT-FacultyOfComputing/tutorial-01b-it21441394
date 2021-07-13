/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int num1,num2;
  int total; 
  float avg; 
  printf("Enter Number 1 :");
  scanf("%d",&num1);
  printf("Enter number 2 :");
  scanf("%d",&num2);
  total=num1+num2;
  avg=(float)total/2;
  printf("Total = %d\n",total);
  printf("average = %.2f\n",avg);

  
  return 0;
}

