/*Modify the repdigit.c program so that the user can enter more than one number to be tested for 
  repeated digits. The program should terminate when the user enters a number thats less than or equal to zero.*/

#include <stdio.h>
#include <stdbool.h>

int main() {

    bool digit_seen[2][10] = {false};        //second row true if a digit has been repeated
    bool repeated_digits  = false;
    int digit;
    long n, m;

    printf("Enter a number: ");

    while (scanf("%ld", &n) > 0 ) {
        m = n;          
        while (m > 0) {
            digit = m % 10;
            if (digit_seen[0][digit]) {
                digit_seen[1][digit] = true;
                repeated_digits = true;
            }
            else digit_seen[0][digit] = true;
            m /= 10;
        }

        printf("Repeated Digits: ");

        if (repeated_digits) {
            for (int i = 0; i < 10; ++i) { if (digit_seen[1][i]) printf("%d ", i); }
        }
        else printf("None");
        printf("\n");

        for (int i = 0; i < 10; ++i) {
            digit_seen[0][i] = false; digit_seen[1][i] = false;
        }
        repeated_digits = false;

        printf("Enter a number: ");
    }

    return 0;

}