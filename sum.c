/*

step-1: start
step-2: print "To find the sum of two numbers.\n"
step-3: print "Enter the first number: "
step-4: read Num1
step-5: print "Enter the second number: "
step-6: read Num2
step-7: Sum = Num1 + Num2
step-8: print "The sum of " + Num1 + " and " + Num2 + " is " + Sum + ".\n"
step-9: stop 

*/


#include <stdio.h>

int main()
{

  int num1, num2, sum;

  printf("To find the sum of two numbers.\n");
  printf("Enter the first number: ");
  scanf("%i", &num1);
  printf("Enter the second number: ");
  scanf("%i", &num2);
  sum = num1 + num2;
  printf("The sum of %i and %i is %i.\n", num1, num2, sum);

  return 0;

}
