// Your grandparents gave you a fantastic cooking recipe but you can never 
// remember how much of each ingredient you have to use! There are 
// 10 ingredients in the recipe and the quantities needed for each of 
// them are given as input (in grams). Your program must read 10 integers 
// (the quantities needed for each of the ingredients, in order) and store 
// them in an array. It should then read an integer which represents an 
// ingredient's ID number (between 0 and 9), and output the corresponding quantity.

#include <stdio.h>

int main(void) {
  
  int quantities[10];
  int ingredientId;
  
  // input 10 ingredient quantities and store in array
  for (int i=0; i<10; i++) {
    scanf("%d", &quantities[i]);
  }
  
  // input ingredient ID number
  scanf("%d", &ingredientId);
  
  if (ingredientId < 0 || ingredientId > 9) {
    printf("Ingredient ID %d not found.\n", ingredientId);
  } else {
    printf("%d\n", quantities[ingredientId]);
  }
  
  return 0;
}
