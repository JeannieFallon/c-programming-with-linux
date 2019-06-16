// Your program should first read the total number of names (an integer) 
// in order to know how many index cards need to be processed altogether. Next,  
// for each index card, your program should read a patron's first name and last 
// name and then display these names correctly, that is on one line, the last 
// name followed by one space, followed by the first name.  Your program 
// should print the reversed name immediately after reading the patron's names 
// (ie, it should not wait until it has read all of the index cards to begin printing). 

#include <stdio.h>

int main(void) {
  int numCards, i;
  char firstName[101], lastName[101];
  
  scanf("%d", &numCards);
  
  for (i=0; i<numCards; i++) {
    scanf("%s %s", firstName, lastName);
    printf("%s %s\n", lastName, firstName);
  }
  
  return 0;
}
