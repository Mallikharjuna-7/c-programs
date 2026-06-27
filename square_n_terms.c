/*

step-1: start
step-2: print "How many square series do you want to print? "
step-3: read SquareCount
step-4: print "The first " + SquareCount + " square series are "
step-5: SquareCounter = 1
step-6: SquareTerm = 1
step-7: print SquareTerm
step-6: if(SquareCouner < SquareCount) 
          SquareCounter = SquareCounter +1 
          SquareTerm = SquareCounter * SquareCounter
          print ", " + SquareTerm
          goto step-6
step-7: print "\n"
step-8: stop

*/


#include <stdio.h>

int main()
{

  int square_count, square_counter, square_term;

  printf("How many square series do you want to print? ");
  scanf("%i", & square_count);
  printf("The first %i square series are ", square_count);
  square_counter = 1;
  square_term = 1;
  printf("%i", square_term);
  while(square_counter < square_count)
  {
    square_counter = square_counter + 1;
    square_term = square_counter * square_counter;
    printf(", %i", square_term);
  }
  printf(".\n");
   
  return 0;

}
