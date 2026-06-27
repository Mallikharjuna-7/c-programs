/*

step-1: start
step-2: print "Which table do you want to print? "
step-3: read Table
step-4: counter = 1
step-5: if(counter <= 20):
          Term = Counter * Table
          print Table + " X " + Counter + " = " + Term + ".\n"
          Counter = Counter + 1
          goto step-5
step-6: stop

*/


#include <stdio.h>

int main()
{

  int table, counter, term;

  printf("Which table do you want to print? ");
  scanf("%i", &table);
  counter = 1;
  while(counter <= 20)
  {
    term = counter * table;
    printf("%i X %i = %i\n", table, counter, term);
    counter = counter + 1;
  }

  return 0;

}
