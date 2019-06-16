// You want to determine the number of cities in a given region that have a 
// population strictly greater than 10,000. To do this, you write a program 
// that first reads the number of cities in a region as an integer, and then 
// the populations for each city one by one (also integers).

#include <stdio.h>

int main(void) {
  int numCities, currPop, i;
  int numBigCities = 0;
  int bigCityPop = 10000;
  
  scanf("%d", &numCities);
  
  // input each population and sum those greater than 10k
  for (i=0; i<numCities; i++) {
    scanf("%d", &currPop);
    if (currPop>bigCityPop) {
      numBigCities++;
    }
  }
  
  printf("%d\n", numBigCities);
  
  return 0;
}
