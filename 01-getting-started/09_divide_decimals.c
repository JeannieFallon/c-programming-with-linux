/* 
Problem statement:
You just started learning a new language and decide to buy a few books 
to practice. Thankfully you quickly find a book seller who offers every 
ook for the same low fixed price. You have a certain amount of money 
and you would like to know how many books of the same price you can 
purchase.

Please write a C-program that starts by reading the amount of money you 
have (which may be a double), then reads the price per book (which again 
may be a double). The program should then display an integer, namely the 
largest number of books that you can purchase with the given amount of 
money.
*/

#include <stdio.h>

int main(void) {
    double totalBudget, bookCost;
    
    // input total budget & cost per book
    scanf("%lf %lf", &totalBudget, &bookCost);
    
    // output number of books to buy
    printf("%d\n", (int)(totalBudget/bookCost));
    
    return 0;
}
