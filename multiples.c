/*

step-1: start
step-2: print "How many multiples of number 11 do you want to print? "
step-3: read MultipleCount
step-4: print "The first " + MultipleCount + " multiples of 11 are "
step-5: Counter = 1
step-6: Multiple = 11
step-7: print Multiple
step-8: if(Counter < MultipleCount):
          Counter = Counter + 1
          Term = Multiple * Counter
          print ", " + Term
          goto step-8
step-9: print".\n"
step-10: stop

*/


#include <stdio.h>

int main()
{

  int multiple_count, counter, multiple, term;

  printf("How many multiples of number 11 do you want to print? ");
  scanf("%i", &multiple_count);
  printf("The first %i multiples of 11 are ", multiple_count);
  counter = 1;
  multiple = 11;
  printf("%i", multiple);
  while(counter < multiple_count)
  {
    counter = counter + 1;
    term = multiple * counter;
    printf(", %i", term);
  }
  printf(".\n");

  return 0; 

}

