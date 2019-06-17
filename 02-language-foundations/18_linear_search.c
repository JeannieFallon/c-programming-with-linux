// You are conducting a linguistic study and are interested in finding words that 
// contain the letter 't' or 'T' in the first half of the word (including the 
// middle letter if there is one). Specifically, if the first half of the word 
// does contain a 't' or a 'T', your program should output a 1. If the first 
// half does not contain the letter 't' or 'T', but the second half does, then 
// your program should output a 2. Otherwise, if there is no 't' or 'T' in the 
// word at all, your program's output should be -1. You may assume that the word 
// entered does not have more than 50 letters.

#include <stdio.h>

int main(void) {
  char word[51];
  char uppT = 'T';
  char lowT = 't';
  int i = 0;
  int tIdx = -1;
  
  scanf("%s", word);
  
  while (word[i] != '\0') {
    // only check for 'T' or 't' until one is found
    if (tIdx == -1) {
      if (word[i] == uppT || word[i] == lowT) {
        tIdx = i;
      }     
    }
    i++;
  }
  
  if (tIdx == -1) {
    printf("%d\n", tIdx);
  }else if (tIdx <= i/2) {
    printf("%d\n", 1);
  } else {
    printf("%d\n", 2);
  }
  
  return 0;
}
