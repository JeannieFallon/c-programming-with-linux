//   You are programming a toaster! The toaster does not have a lot of memory, so you need to be careful about the data types you use 
//   (remember that  different  data types use different amounts of memory). To make this easier, you'd like an easy way to track how 
//   much memory your variables are going to  use.
  
//   Your job is to write a program that shows, in human-readable form (see below for specifics), how much memory a set of variables of a 
//   certain type will   use. Your program should read a character that identifies the data type ('i' for int, 's' for short, 'c' for char, 
//   'd' for double). Next it should read   an integer that indicates how many variables of the given type you wish to store.
  
//   Your program should then calculate the amount of memory required to store the given variables. Your program needs to be written in such 
//   a way that it   would also perform correctly on other computers. In other words, rather than hard-coding specific sizes for the different 
//   variable types, your program   needs to use the "sizeof()" function to determine how much memory an individual variable of a given type needs.
  
//   Finally, you need to output the amount of space required by your variables to the screen. You need to make sure you provide this output in a 
//   form that  is  easy to read for humans. The following examples illustrate what this means:
  
#include <stdio.h>

int main(void) {

  int numVar, numBytes, sumBytes;
  int kb = 1000;
  int mb = 1000000;
  char dataType;

  scanf("%c %d", &dataType, &numVar);

  if (dataType == 'c') {
    numBytes = sizeof(char);
  } else if (dataType == 's') {
    numBytes = sizeof(short);
  } else if (dataType == 'i') {
    numBytes = sizeof(int);
  } else {
    numBytes = sizeof(double);
  }

  sumBytes = numVar * numBytes;

  if (sumBytes >= mb) {
    printf("%d MB and %d KB and %d B\n", sumBytes/mb, (sumBytes/kb)%kb, sumBytes%kb);
  } else if (sumBytes >= kb) {
    printf("%d KB and %d B\n", sumBytes/kb, sumBytes%kb);
  } else {
    printf("%d B\n", sumBytes);
  }

  return 0;
}
