/*

step-1: start
step-2: print "Up to which number do you want to print fibonacci series?  "
step-3: read FibonacciLimit
step-4: print "The fibonacci series up to " + FibonacciLimit + " are "
step-5: PreviousTerm = 1
step-6: SecondPreviousTerm = 0
step-7: CurrentTerm = 1
step-8: print CurrentTerm
step-9: if(CurrentTerm <= FibonacciLimit):
           print ", " + Current Term
           SecondPreviousTerm = PreviousTerm
           PreviousTerm = CurrentTerm
           CurrentTerm = PreviousTerm + SecondPreviousTerm
           goto step-9
step-10: print (".\n")
step-11: stop 

*/



#include <stdio.h>

int main() 
{
  
  int fibonacci_limit, previous_term, second_previous_term, current_term;
  
  printf("Up to which number do you want to print fibonacci series? ");
  scanf("%i", &fibonacci_limit);
  printf("The fibonacci series up to %i are ", fibonacci_limit);
  previous_term = 1;
  second_previous_term = 0;
  current_term = 1;
  printf("%i", current_term);
  while(current_term <= fibonacci_limit)
  {
    printf(", %i", current_term);
    second_previous_term = previous_term;
    previous_term = current_term;
    current_term = previous_term + second_previous_term;
  }
  printf(".\n");

  return 0;

}

