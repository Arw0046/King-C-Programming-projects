/*(a) Write a program that reads a message, then checks whether its a palindrome
  (the letters are the same from left to right as from right to left)
  Ignore all characters that arent letters. Use integer variables to keep track 
  of positions in the array.
  
  (b) Revise the program to use pointers instead of integers to keep track of 
  positions in the array.
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX 50

int main() {

    char c, s[MAX] = {0}, *p1 = s, *p2 = s + MAX - 1;
    bool palindrome = true; 
    printf("Enter a message: ");


    while ((c = getchar()) != '\n') {
        *p1 = tolower(c);
        ++p1;
    }

    for (p1 = s; p1 < p2; ++p1, --p2) {
        while (!isalpha(*p1)) ++p1;
        while (!isalpha(*p2)) --p2;
        if (*p1 != *p2)  { palindrome = false; break; }
    }

    if (palindrome) printf( "Palindrome");
    else printf("Not a palindrome");

    return 0;

}