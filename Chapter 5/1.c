/*Write a program that calcualates how many digits a number contains.
  You may assume that the number has no more than four digits.*/

#include <stdio.h>
#include <stdbool.h>

int main() {

    int num = 0; int digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if( num < 0 || num > 9999) digits = 0;       //first test to see if number is out of range
    else if(num <= 9) digits = 1;
    else if(num <= 99) digits = 2; 
    else if(num <= 999) digits = 3;
    else digits = 4;

    if(digits > 0) { printf("The number %d has %d digits", num, digits); }
    else printf("I didnt write enough code to figure that one out, sorry");

    return 0;
}