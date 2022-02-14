/* Exercise 1 - Calculations
Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) //main funtion execution begins
{
  //variable declaration
  int subject,mark;
  float avgMark;
  
  //input
  printf("Enter subject 01:");
  scanf("%d", &subject);
  printf("Enter mark for subject 01: ");
  scanf("%d", &mark);
  printf("Enter subject 02:");
  scanf("%d", &subject);
  printf("Enter mark for subject 02: ");
  scanf("%d", &mark);
  
  //calculations
  avgMark = (mark + mark) /2.0;
  
  //output
  printf ("Your Average Mark for subject 1 and subject 2 are %.2f", avgMark);
   
  return 0;
} //main funtion execution ends

