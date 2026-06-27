/*

step-1: start
step-2: print "Up to which number do you want to print n power n series? "
step-3: read PowerLimit
step-4: print "The n power n series up to " + PowerLimit + " are "
step-5: PowerTerm = 1
step-6: print PowerTerm
step-7: PowerCounter = 1
step-8: PowerSeries = 2
step-9: if(PowerTerm <= PowerLimit)
          if(PowerTerm > 1)
            print ", " + PowerTerm
          PowerTerm = 1 
          if(PowerCounter <= PowerSeries)
            PowerTerm = PowerTerm * PowerSeries
            PowerCounter = PowerCounter + 1
          PowerSeries = PowerSeries + 1
          PowerCounter = 1
          goto step-9
step-10: print ".\n"
step-11: stop

*/


#include <stdio.h> 

int main()
{

  int power_limit, power_term, power_counter, power_series;

  printf("Up to which number do you want to print n power n series? ");
  scanf("%i", &power_limit);
  printf("The n power n series up to %i are ", power_limit);
  power_term = 1;
  printf("%i", power_term);
  power_counter = 1;
  power_series = 2;
  while(power_term <= power_limit)
  {
    if(power_term > 1)
    {
      printf(", %i", power_term);
    }
    power_term = 1;
    while(power_counter <= power_series)
    {
      power_term = power_term * power_series;
      power_counter = power_counter + 1;
    }
    power_series = power_series + 1;
    power_counter = 1;
  }
  printf(".\n");

 return 0;

} 
