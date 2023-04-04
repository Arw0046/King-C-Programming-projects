/*Write a program that asks the user to enter a two digit number, 
  then prints the number with the digits reversed.*/

#include <stdio.h>

int main() {
    int numb = 0;
    int digit_ones = 0;
    int digit_tens = 0;

    printf("Enter a two digit number: ");
    scanf("%d", &numb);
    
    digit_ones = numb % 10;
    digit_tens = numb/10;

    printf("\nThe reversal: %d%d", digit_ones, digit_tens);

    return 0;
}