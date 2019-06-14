#include <stdio.h>

int main(void) {
    double temp;
    
    // input Celsius temp
    scanf("%lf", &temp);
    
    // output Fahrenheit temp with one decimal place 
    printf("%.1lf\n", temp*9.0/5.0+32.0);
    
    return 0;
}
