/*

step-1: start
step-2: print "How many natural numbers do you want to print? "
step-3: read NaturalCount
step-4: print "The first " + NaturalCount + " natural numbers are: "
step-5: Natural = 1
step-6: print Natural
step-6: if( Natural < NaturalCount ):
           Natural = Natural + 1
           print ", " + Natural
           goto step-6
step-8: print ".\n"
step-9: stop

*/


#include <stdio.h>

int main() {

  int natural_count, natural;

  printf("How many natural numbers do you want to print? ");
  scanf("%i", &natural_count);
  printf("The first %i natural numbers are: ", natural_count);
  natural = 1;
  printf("%i", natural);
  while ( natural < natural_count ) {
    natural = natural + 1;
    printf(", %i", natural);
  }
  printf(".\n");
   
  return 0;
   
}
