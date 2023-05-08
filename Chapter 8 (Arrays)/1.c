/*Modify the repdigit.c program of section 8.1 so that it shows which digits (if any)
  were repeated.*/

#include <stdio.h>
#include <stdbool.h>

int main() {

    bool digit_seen[2][10] = {false};
    bool repeated_digits  = false;
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[0][digit]) {
            digit_seen[1][digit] = true;
            repeated_digits = true;
        }
        else digit_seen[0][digit] = true;
        n /= 10;
    }
    printf("Repeated Digits: ");

    if (repeated_digits) {
        for (int i = 0; i < 10; ++i) { if (digit_seen[1][i]) printf("%d ", i); }
    }
    else printf("None");

    return 0;

}