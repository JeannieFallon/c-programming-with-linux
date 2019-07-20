// Your program should first read from the user an integer, and next take the square root 
// of that integer and print it out with 8 decimal places. Next, your program should find 
// and print out (on a new line) the mathematical constant e (Euler's constant) with 10 
// decimal places. To find e, use the mathematical function exp() and note that e = exp(1).

// Finally, in order to remind your students how to use the compiler, please print (on a 
// new line) the correct compiler command to link the mathematics library with your program. 
// Note that in the example given below this line needs to be correctly completed. Your 
// program's source code is stored in program.c, and your compilation command should produce 
// an executable titled program.

#include <stdio.h>
#include <math.h>

int main(void) {
	
	double num;
	scanf("%lf", &num);
	printf("%.8lf\n", sqrt(num));
	printf("%.10lf\n", exp(1));
	printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra -lm program.c -o program\n");
	
	return 0;
}
