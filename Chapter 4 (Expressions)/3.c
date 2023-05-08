/*Rewrite the program from exercise 2 so that it prints the reversal of a three digit number 
  without using arithmatic to split the digit into digits */

#include <stdio.h>

int main() {

    int digit_ones = 0;
    int digit_tens = 0;
    int digit_hundreds = 0;
    int reversed_numb = 0;

    printf("Enter a three digit number: ");
    scanf("%1d%1d%1d", &digit_hundreds, &digit_tens, &digit_ones);

    reversed_numb = (digit_ones * 100) + (digit_tens * 10) + digit_hundreds;

    printf("\nThe reversal: %d", reversed_numb);

    return 0;
}