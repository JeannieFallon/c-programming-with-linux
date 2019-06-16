// Your program will have to read a sequence of positive integers and display their 
// sum. We do not know how many integers there will be, but the sequence always ends 
// with the value -1 (which is not an expense, just an end marker).

#include <stdio.h>

int main(void) {
  int sum = 0;
  int currVal = 0;
  
  while (currVal != -1) {
    sum += currVal;
    scanf("%d", &currVal);
  }
  
  printf("%d\n", sum);
  
  return 0;
}
