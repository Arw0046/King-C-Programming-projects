/*Modify Programming project 7 from Chapter 2 so that it includes the following function:
  
  void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
  
  The function determines the smallest number of $20, $10, $5, and $1 bills necessary
  to pay the amount represented by the dollars parameter points to a variable in which
  the function will store the number of $20 bills required. The tens, five, and ones 
  parameters are the same.
*/

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {

    *twenties = dollars / 20;
    dollars -= *twenties * 20;

    *tens = dollars / 10;
    dollars -= *tens * 10;

    *fives = dollars / 5;
    dollars -= *fives * 5;

    *ones = dollars;
    
};


int main() {

    int dollars, twenties, tens, fives, ones;

    printf("Enter a dollar amount in US currency: ");
    scanf("%d", &dollars);

    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("\n$20 bills: %d", twenties);
    printf("\n$10 bills: %d", tens);
    printf("\n$5 bills: %d", fives);
    printf("\n$1 bills: %d", ones);

    return 0;

}