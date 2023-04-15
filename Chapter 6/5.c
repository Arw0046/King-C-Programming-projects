/*Generalize the program from Chapter 4-Project 1 so that the number 
  can have more than 2 digits.*/

#include <stdio.h>

int main() {

    int n, digit;

    printf("Enter an integer of any size(NOT TOO BIG!!): ");
    scanf("%d", &n);

    do {
        digit = n % 10;
        n /= 10;

        printf("%d", digit);
    }
    while (n != 0);
}