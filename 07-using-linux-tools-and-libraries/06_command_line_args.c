// You are selling plants and are working on creating invoices for customer orders. You are 
// testing a program that should receive, as arguments passed in from the command line, a 
// number of plants to be purchased (an integer) and the price per plant (a decimal number). 
// Your job is to create an invoice for the customer (see examples) that prints out the total 
// price of the order (which can be found by multiplying the price per plant by the number of 
// plants purchased). 

// If your program is called with an incorrect number of arguments the user should receive the 
// message "Invalid input" (see Example 3).

// Be sure to print prices with two decimal places.

#include <stdio.h>
#include <stdlib.h>

double getTotal(int, double);

int main(int argc, char *arg[]) {
	int numPlants;
	double price;
	
	if (argc != 3) {
		printf("Invalid input\n");
	} else {
		numPlants = atoi(arg[1]);
		price = atof(arg[2]);
		printf("%d plants for %.2lf dollars each cost %.2lf dollars.\n",
		            numPlants, price, getTotal(numPlants, price));
	}
	
	return 0;
}

double getTotal(int num, double price) {
	return num * price;
}

