/*

step-1: start
step-2: print "To multiply three numbers.\n"
step-3: print "Enter the first number: "
step-4: read Term1
step-5: print "Enter the second number: "
step-6: read Term2
step-7: print "Enter the third number: "
step-8: read Term3
step-9: Product = Term1 * Term2 * Term3 
step-10: print "The product of " + Term1 + ", " + Term2 + " and " + Term3 + " is " + Product + ".\n"
step-11: stop

*/


#include <stdio.h>

int main()
{

  int term1, term2, term3, product;

  printf("To multiply three numbers.\n");
  printf("Enter the first number: ");
  scanf("%i", &term1);
  printf("Enter the second number: ");
  scanf("%i", &term2);
  printf("Enter the third number: ");
  scanf("%i", &term3);
  product = term1 * term2 * term3;
  printf("The product of %i, %i and %i is %i.\n", term1, term2, term3, product);

  return 0;

}
