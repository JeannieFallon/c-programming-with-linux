// You are developing an elixir that supposedly makes a person younger. You just need 
// to get the software working correctly before starting to market your product. Your 
// program keeps track of a person's age, but in order to be more secretive you work 
// with a pointer rather than the variable that stores the age directly. 

// You are provided with a main function -- please complete it. Do not change any of 
// the lines of code that have already been completed. Please only change the lines 
// that are currently comments.

#include <stdio.h>

int main(void) {

    int age;

    // add a line here that declares an integer pointer named "ageptr"
  int * ageptr;

    scanf("%d", &age);

    // add a line here that stores the address of age in ageptr  
  ageptr = &age;
  
    printf("The secret address is... ");

    // add a line here that prints out the address stored in ageptr  
  printf("%p\n", ageptr);
  
    printf("Now take three drops of the magic elixir. \n");

    // add a line that uses only ageptr to lower the age by 5 years
  * ageptr = * ageptr - 5;
  
    printf("Did the elixir work? You are %d years old!\n", age);

    return 0;

}