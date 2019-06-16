// In order to be able to better fight various epidemics in a region, the 
// department of medicine of a major university has launched a large study. 
// Researchers are interested in how fast an epidemic spreads, and therefore 
// the speed at which health measures must be put in place. Your program 
// should first read an integer representing the total population of the 
// area. Knowing that a person was infected on day 1 and that each infected 
// person contaminates two new people every day, you must calculate the day 
// at which the entire population of the area will be infected.

#include <stdio.h>

int main(void) {
  int totalPop;
  int numDays = 1;
  int totalInfected = 1;
  
  scanf("%d", &totalPop);
  
  while (totalInfected < totalPop) {
    numDays++;
    totalInfected += totalInfected*2;
  }
  
  printf("%d\n", numDays);
  
  return 0;
}
