// Please write a C-program that uses a recursive function called "sumOfDigits()" 
// to compute the sum of the digits of a number. To do so, your main function 
// should first read an integer number as input and then call sumOfDigits(), 
// which should in turn call itself until there are no digits left to sum, at 
// which point the final sum should display to the user.
 
 #include <stdio.h>
 
 int sumOfDigits(int);
 
 int main(void) {
   int num;
   scanf("%d", &num);
   printf("%d\n", sumOfDigits(num));
   return 0;
 }
 
 int sumOfDigits(int num) {
  if (num < 10) {
    return num;
  } else {
    return num%10 + sumOfDigits(num/10);
  }
 }