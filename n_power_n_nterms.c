/*

step-1: start
step-2: print "How many terms in n power n series do you want to print? "
step-3: read PowerCount
step-4: print "The first " + PowerCount + " terms in n power n series is "
step-5: PowerTerm = 1
step-6: print PowerTerm
step-7: PowerCounter = 1
step-8: PowerSeries = 2
step-9: if(PowerSeries <= PowerCount) 
          if(PowerCounter <= PowerSeries)
            PowerTerm = PowerTerm * PowerSeries
            PowerCounter = PowerCounter + 1
          print ", " + PowerTerm
          PowerSeries = PowerSeries + 1
          PowerTerm = 1
          PowerCounter = 1
          goto step-9
step-10: print ".\n"
step-11: stop

*/



#include <stdio.h>

int main()
{

  int power_count, power_series, power_counter, power_term;

  printf("How many terms in n power n series do you want to print? ");
  scanf("%i", &power_count);
  printf("The first %i terms in n power n series is ", power_count);
  power_term = 1;
  printf("%i", power_term);
  power_counter = 1;
  power_series = 2;
  while(power_series <= power_count)
  {
    while(power_counter <= power_series)
    {
      power_term = power_term * power_series;
      power_counter = power_counter + 1;
    }
    printf(", %i", power_term);
    power_series = power_series + 1;
    power_term = 1;
    power_counter = 1;
  }
  printf(".\n");

  return 0;

}
