/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float m1,m2,total,avg=0;

  printf("Enter the mark1:");
  scanf("%f" , &m1 );

  printf("Enter the mark2:");
  scanf("%f" , &m2 );

  total=m1+m2;
  avg=(float)total/2;

  printf("The average is:%.2f", avg );
  
  return 0;
}

