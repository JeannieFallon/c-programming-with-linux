// Your job is to find the length of the longest word in a text with no punctuation 
// or special characters of any kind - only contains words. To do so, please write 
// a C-program that takes as a input first the number of words in a text, followed 
// by all of the words in the text. The output of your program should be the length 
// of the longest word in the text.

// To simplify your program, you can assume that the longest word will not exceed 100 characters.

#include <stdio.h>

int main(void) {
  int numWords, currLen, i, j;
  int maxLen = 0;
  char currWord[101];
  
  scanf("%d", &numWords);
  
  for (i=0; i<numWords; i++) {
    scanf("%s", currWord);
    
    j = 0;
    currLen = 0;
    while (currWord[j] != '\0') {
      currLen++;
      j++;
    }
    
    if (currLen > maxLen) {
      maxLen = currLen;
    }
  }
  
  printf("%d\n", maxLen);
  
  return 0;
}
