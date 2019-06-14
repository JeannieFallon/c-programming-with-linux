/*
Problem statement:
If you have 0 passengers the carpool site does not charge 
anything and you alone pay the full cost of the trip. If 
you have 1 or more passengers the carpool site adds a $1 
fee to the cost of the trip and evenly divides the total 
cost ($1 fee + gas) among the passengers and you. You want 
to write a program that calculates the cost you have to pay. 
The program should read the number of passengers (an integer) 
and the cost of gas for the trip (a decimal number). The 
program should then print the cost that you have to pay 
(a decimal number) with 2 digits after the decimal point.
*/

#include <stdio.h>

int main(void) {
    int passengers;
    double cost;
    
    // input number of passengers & cost
    scanf("%d %lf", &passengers, &cost);
    
    // if one or more passengers, add $1 fee
    if (passengers >= 1) {
        cost += 1;
    }
    
    // output your individual cost of trip to two decimal places
    printf("%.2lf\n", cost/(passengers+1));
    
    return 0;
}
