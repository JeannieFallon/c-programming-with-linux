// Your program must first read an integer indicating the number that the child will 
// have to find during the game. Next the program should repeatedly read the player's 
// guesses and display the text "it is more" if the child has submitted a smaller 
// number or "it is less" if they have submitted a larger number. Once the correct 
// number is reached, the program should print "Number of tries needed:" followed by 
// a new line and the integer number of tries that it took the guesser.


#include <stdio.h>

int main(void) {
  int secret, guess;
  int tries = 0;
  
  scanf("%d", &secret);
  
  do {
    scanf("%d", &guess);
    tries++;
    if (guess > secret) {
      printf("it is less\n");     
    } else if (guess < secret) {
      printf("it is more\n");
    } else {
      printf("Number of tries needed:\n%d\n", tries);
    }
  } while (guess != secret);

  return 0;
}
