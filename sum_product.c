/*

step-1: start
step-2: print "To find two individual numbers from their sum and product.\n"
step-3: print "Enter the sum: "
step-4: read Sum
step-5: print "Enter the product: "
step-6: read Product
step-7: Num1 = 0
step-8: if(Num1 < Sum):
          Num2 = Sum - Num1
          if(Num1 * Num2  == Product):
            print "The sum of " + Num1 + " and " + Num2 + " is " + Sum + " and their product is " + Product + ".\n"
            goto step-10
          Num1 = Num1 + 1
          goto step-8
step-9: print "Invalid numbers.\n"
step-10: stop

*/


#include <stdio.h>

int main()
{

  int sum, product, num1, num2;

  printf("To find two individual numbers from their sum and product.\n");
  printf("Enter the sum: ");
  scanf("%i", &sum);
  printf("Enter the product: ");
  scanf("%i", &product);
  num1 = 0;
  while(sum > num1)
  {
    num2 = sum - num1;
    if(num1 * num2 == product)
    {
      printf("The sum of %i and %i is %i and their product is %i.\n", num1, num2, sum, product);

      return 0;
    }
    num1 = num1 + 1;
  }
  printf("Invalid numbers.\n");

  return 0;

}
