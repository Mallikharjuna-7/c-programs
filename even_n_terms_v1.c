/*

step-1: start
step-2: print "How many even numbers do you want to print? "
step-3: read EvenCount
step-4: print "The first " + EvenCount + even numbers are "
step-5: Even = 0
step-6: print Even
step-7: EvenCounter = 1
step-8: if(EvenCounter < EvenCount)
	  Even = Even + 2
          print ", " + Even
          EvenCounter = EvenCounter + 1
          goto step-8
step-9: print ".\n"
step-10: stop

*/

#include <stdio.h>

int main() 
{

  int even_count, even, even_counter;

  printf("How many even numbers do you want to print? ");
  scanf("%i", &even_count);
  printf("The first %i even numbers are ", even_count);
  even = 0;
  printf("%i", even);
  even_counter = 1;
  while(even_counter < even_count)
  {
    even = even + 2;
    printf(", %i", even);
    even_counter = even_counter + 1;
  }
  printf(".\n");

  return 0;

}
