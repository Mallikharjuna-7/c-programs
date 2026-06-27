/*

step-1: start
step-2: print "Up to which number do you want to print even numbers."
step-3: read EvenLimit
step-4: print "The even numbers up to " + EvenLimit + " are "
step-5: Even = 0
step-6: print Even
step-7: if(Even <= EvenLimmit-2):
           Even = Even + 2
           print ", " + Even
           goto step-7
step-8: print ".\n"
step-9: stop

*/


#include <stdio.h>

int main()
{

  int even_limit, even;

  printf("Up to which number do you want to print even numbers? ");
  scanf("%i", &even_limit);
  printf("The even numbers up to %i are ", even_limit);
  even = 0;
  printf("%i", even);
  while(even <= even_limit-2)
  {
    even = even + 2;
    printf(", %i", even);
  }
  printf(".\n");

  return 0;

}
