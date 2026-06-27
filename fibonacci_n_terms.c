/*

step-1: start
step-2: print "How many terms in fibonacci series do you want to print? "
step-3: read FibonacciCount
step-4: print "The first " + FibonacciCount + " terms in fibonacci series are "
step-5: PreviousTerm = 1
step-6: SecondPreviousTerm = 0
step-7: CurrentTerm = 1
step-8: print CurrentTerm
step-9: FibonacciCounter = 1
step-10: if(FibonacciCounter < FibonacciCount)
           CurrentTerm = PreviousTerm + SecondPreviousTerm
           print ", " + Current Term
           SecondPreviousTerm = PreviousTerm
           PreviousTerm = CurrentTerm
           FibonacciCounter = FibonacciCounter + 1
           goto step-10
step-11: print (".\n")
step-12: stop 

*/


#include <stdio.h>

int main()
{
  
  int fibonacci_count, previous_term, second_previous_term, current_term, fibonacci_counter;

  printf("How many terms in fibonacci series do you want to print? ");
  scanf("%i", &fibonacci_count);
  printf("The first %i terms in fibonacci series are ", fibonacci_count);
  previous_term = 1;
  second_previous_term = 0;
  current_term = 1;
  printf("%i", current_term);
  fibonacci_counter = 1;
  while(fibonacci_counter < fibonacci_count)
  {
    current_term = previous_term + second_previous_term;
    printf(", %i", current_term);
    second_previous_term = previous_term;
    previous_term = current_term;
    fibonacci_counter = fibonacci_counter + 1;
  }
  printf(".\n");

  return 0;

}

