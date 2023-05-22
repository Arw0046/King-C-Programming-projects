/*Write a program that asks the user to enter a U.S. dollar amount 
  then shows how to pay that amount using the smallest number of $20
  $10, $5, and $1 bills.
*/

#include <stdio.h>

int main() {

    int n, m;

    printf("Enter a dollar amount in US currency: ");
    scanf("%d", &n);

    m = n/20;
    printf("\n$20 bills: %d", m);
    n -= m*20;

    m = n/10;
    printf("\n$10 bills: %d", m);
    n -= m*10;

     m = n/5;
    printf("\n$5 bills: %d", m);
    n -= m*5;

    printf("\n$1 bills: %d", n);

    return 0;

}