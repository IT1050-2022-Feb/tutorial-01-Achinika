/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/


#include <stdio.h>

int minimum (int num1, int num2), int maximum (int num1, int num2), int multiply (int num1, int num2); //funtion prototype
int main(void) //main function execution begins
{
   //local variable declaration
   int no1, no2;
   int min = 0; int max = 0, int multi = 0; //variable declaration and initialization
   
   //input
   printf("\nEnter a value for no 1 : ");
   scanf("%d", &no1);
   printf("\nEnter a value for no 2 : ");
   scanf("%d", &no2);
   
   min = minimum ( no1 , no2 ); //calling function 01
   max = maximum ( no1 , no2 ); //calling function 02
   multi = multiply ( no1 , no2 ); //calling function 03
   
   //output
   puts (\n\n );
   printf("Minimum value is %d ", minimum(no1, no2));
   printf("\nMaximum value is %d ", maximum(no1, no2));
   printf("\nMultiple value is %d ", multiply(no1, no2));
   
   return 0;
} //main function execution ends

//called funtions

int minimum (int num1, int num2)
{
   if (num1 < num2)
   {
     return minimum = num1;
   }
   else
     return minimum = mum2;
} //end funtion 01
int maximum (int num1, int num2)
{
   if (num1 < num2)
   {
     return maximum = num1;
   }
   else
     return maximum = mum2;
} //end funtion 02
int multiply (int num1, int num2)
{
     return multiply = num1 * num2;
 
} //end funtion 03
   
   
   
