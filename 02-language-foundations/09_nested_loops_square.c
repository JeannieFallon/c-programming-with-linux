// Create a program that displays on the screen a square of n x n stars, 
// with the integer n given as an input.

#include <stdio.h>

int main(void) {
  int numStars, i, j;
  char star = '*';
  
  scanf("%d", &numStars);
  
  for (i=0; i<numStars; i++) {
    for (j=0; j<numStars; j++) {
      printf("%c", star);
    }
    printf("\n");
  }
  
  return 0;
}
