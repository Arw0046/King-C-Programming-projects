/*Write a program that asks the user to enter a fraction,
  the reduces the fraction to lowest terms.*/

#include <stdio.h>

int main() {

    int m, n, num, denom, r;

    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    num = m;
    denom = n; 

    while(n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    printf("In lowest terms: %d/%d", num / m ,denom / m);

    return 0;
}