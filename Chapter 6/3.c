/*Write a program that asks the user to enter a fraction,
  the reduces the fraction to lowest terms.*/

#include <stdio.h>

int main() {

    int n, d, top_n, gcd,  r;

    printf("Enter a fraction: ");
    scanf("%d/%d", &n, &d);
    gcd = d;
    top_n = n;

    while(top_n != 0) {
        r = gcd % top_n;
        gcd = top_n;
        top_n = r;
    }

    n /= gcd;
    d /= gcd;

    printf("In lowest terms: %d/%d", n, d);

    return 0;
}