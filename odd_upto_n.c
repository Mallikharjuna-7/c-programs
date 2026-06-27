/*

step-1: start
step-2: print "Up to which number do you want to print odd numbers? "
step-3: read OddLimit
step-4: print "The odd numbers up to " + OddLimit + " are "
step-5: Odd = 1
step-6: print Odd
step-7: if(Odd <= OddLimit-2):
          Odd = Odd + 2
          print ", " + Odd
          goto step-7
step-8: print".\n"
step-9: stop


*/

#include <stdio.h>

int main()
{

  int odd_limit, odd;

  printf("Up to which number  do you want to print odd numbers? ");
  scanf("%i", &odd_limit);
  printf("The odd numbers up to %i are ", odd_limit);
  odd = 1;
  printf("%i", odd);
  while(odd <= odd_limit-2)
  {
    odd = odd + 2;
    printf(", %i", odd);
  }
  printf(".\n");

  return 0;

}
