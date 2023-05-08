/*Extend the program in number 1 to handle three digit numbers.*/

#include <stdio.h>

int main() {

    int numb = 0;
    int digit_ones = 0;
    int digit_tens = 0;
    int digit_hundreds = 0;
    int reversed_numb = 0;

    printf("Enter a three digit number: ");
    scanf("%d", &numb);
    
    digit_ones = numb % 10;
    digit_hundreds = numb/100;
    digit_tens = (numb/10) - digit_hundreds*10;
    reversed_numb = (digit_ones * 100) + (digit_tens * 10) + digit_hundreds;

    printf("\nThe reversal: %d", reversed_numb);

    return 0;
}

