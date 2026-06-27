/*

step-1: start
step-2: print "How many odd numbers do you want to print? "
step-3: read OddCount
step-4: print "The first " + OddCount + odd numbers are "
step-5: Odd = 1
step-6: print Odd
step-7: OddCounter = 2
step-8: if(OddCounter < OddCount):
          Odd = 2 * OddCounter - 1
          print ", " + Odd
          OddCounter = OddCounter + 1
          goto step-8
step-9: print ".\n"
step-10: stop 

*/


#include <stdio.h>

int main() 
{

  int odd_count, odd, odd_counter;

  printf("How many odd numbers do you want to print? ");
  scanf("%i", &odd_count);
  printf("The first %i odd numbers are ", odd_count);
  odd = 1;
  printf("%i", odd);
  odd_counter = 2;
  while(odd_counter <= odd_count)
  {
    odd = 2 * odd_counter - 1;
    printf(", %i", odd);
    odd_counter = odd_counter + 1;
  }
  printf(".\n");

  return 0;

}
