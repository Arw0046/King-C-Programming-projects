/*Write a program that reads an integer entered by the user and displays it in octal.
  The putput should be displayed using 5 digits, even if fewer digits are sufficient.*/

#include <stdio.h>

int main() {

    int numb = 0;
    int numb_oct = 0;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &numb);

   printf("In octal, your number is: %d%d%d%d%d", 
           (numb/4096)%8,
           (numb/512)%8,
           (numb/64)%8,
           (numb/8)%8,
           numb%8);

    return 0;
}