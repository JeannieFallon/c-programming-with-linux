// To help you with this task, please write a function called min() that finds and 
// returns the smallest amongst two integers (be sure to also write a prototype for 
// this function). The function thus takes two integers as input and returns the 
// smallest of the two. This function will use an if statement with a condition that 
// contains either "less than" or "greater than".

// Next, please use min() in your main function to work your way through an entire 
// list of numbers in order to find its minimum. The first number you read gives 
// the number of elements in the list of integers under consideration. You will 
// then read the integer values, using min() to keep only the smallest integer 
// read at each step. In the end, please print out the smallest integer in the list.

#include <stdio.h>

int min(int, int);

int main(void) {
  int numVals, i, currVal, minVal;
  
  scanf("%d", &numVals);

  // scan first val and assign to both current & minimum values
  scanf("%d", &currVal);
  minVal = currVal;

  // start loop on second value of input list at i=1
  for (i=1; i<numVals; i++) {
    scanf("%d", &currVal);
    minVal = min(currVal, minVal);
  }
  
  printf("%d\n", minVal);
  
  return 0;
}

int min(int currVal, int minVal) {
  if (currVal < minVal) {
    return currVal;
  }
  
  return minVal;
}
