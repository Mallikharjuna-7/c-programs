/*

step-1: start
step-2: print "Up to which number do you want to print square series? "
step-3: read SquareLimit
step-4: print "The square series up to " + SquareLimit + " are "
step-5: SquareCounter = 1
step-6: SquareTerm = 1
step-7: print SquareTerm
step-6: if(SquareTerm <= SquareLimit)
          if(SquareTerm > 1)
            print ", " + SquareTerm
          SquareTerm = SquareCounter * SquareCounter 
          SquareCounter = SquareCounter +1 
          goto step-6
step-7: print "\n"
step-8: stop

*/


#include <stdio.h>

int main() 
{

  int square_limit, square_counter, square_term;

  printf("Up to which number do you want to print square series? ");
  scanf("%i", &square_limit);
  printf("The square series up to %i are ", square_limit);
  square_counter = 1;
  square_term = 1;
  printf("%i", square_term);
  while(square_term <= square_limit)
  {
    if(square_term > 1)
    {
      printf(", %i", square_term);
    }
    square_term = square_counter * square_counter;
    square_counter = square_counter + 1;
  }
  printf(".\n");

  return 0;

}
