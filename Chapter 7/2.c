/*modify the program square2.c from 6.3 so that it pauses every 24 squares 
  and displays the following message:
  Please enter to continue...
  After displaying the message, the program should use getchar to read a character.
  getchar wont allow the program to continue until the user presses enter.*/

#include <stdio.h>

int main() { 

    short i;
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar(); // to clear the buffer

    for (i = 1; i <= n; ++i) {
        printf("%10hd%10hd\n", i, i*i); 
        if (i % 24 == 0) {
            printf("Please enter to continue...");
            while (getchar() != '\n');
        }
    }
}

