/*

step-1: start
step-2: print "The table book.\n"
step-3: Num = 1
step-4: print "The multiplication of table " + Num + " is\n"
step-5: counter = 1
step-6: if(counter <= 20):
          Term =  Counter * Num
          print Num + " X " + Counter + " = " + Term + "\n"
          Counter = Counter + 1
          goto step-6
step-7: if(Num <= 20):
          Num = Num + 1
          goto step-4
step-8: stop

*/


#include <stdio.h>

int main()
{

  int num, counter, term;

  printf("The table book.\n");
  num = 1;
  while(num <= 20)
  {
    printf("The multiplication of table %i is\n", num);
    counter = 1; 
    while(counter <= 20)
    {
      term = counter * num;
      printf("%i X %i = %i\n", num, counter, term);
      counter = counter + 1;
    }
    num = num + 1;  
  }

  return 0;

}
