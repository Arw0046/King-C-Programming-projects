/*Write a program that calcualates how many digits a number contains.
  You may assume that the number has no more than four digits.*/

#include <stdio.h>
#include <stdbool.h>

int main() {

    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 9) { printf("\nThe number %d has 1 digit", num); }
    else if(num <= 99) { printf("\nThe number %d has 2 digits", num); }
    else if(num <= 999) { printf("\nThe number %d has 3 digits", num); }
    else if(num <= 9999) { printf("\nThe number %d has 4 digits", num); }
    else printf("\nI didnt write enough code to figure that number out, sorry.");

    return 0;
}