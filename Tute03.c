/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.
e.g.
n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */


#include <stdio.h>
int main(void) //main program execution begins
{
  //variable declaration
  int no;
  int sum = 0; //initialization
  int i; //counter
  
  //input
  printf (" Enter a positive integer number/x: ");
  scanf (" %d ", &no );
  
  //calculations
  for ( i = 1; i <= no; i++ ) 
  {
    sum += i;
  } //for loop ends
  
  //output
  printf (" \n\nSUM of the Numbers from 1 to x is %d ", sum);
  
  return 0;
  
}//main program execution ends

