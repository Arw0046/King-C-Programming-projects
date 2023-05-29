/*(a) Write a program that reads a message and prints the reversal of the message.
  Hint: Read the message one at a time and store the characters in an array.
  Stop reading when the array is full or the character \n is read.

  (b) Revise the program to use a pointer instead of an integer to keep track of 
  the current position in the array.
*/

#include <stdio.h>

#define N 10

void reverse_message(char c, char  *s, char *p) {

    printf("Enter a message: ");

    while ((c = getchar()) != '\n' && p < s + N) {
        *p++ = c;
    }

    printf("Message in reverse: ");

    while (p > s) putchar(*--p);

}
int main() {
    
    char c, s[N] =  {0}, *p = s;

    reverse_message(c, s, p);

    return 0;
}