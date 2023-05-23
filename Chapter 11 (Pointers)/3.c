/*Modify Programming Project 3 from Chapter 6 so that it includes the following function: 
  
  void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

  numerator and denominator are the numerator and denominator of a fraction. reduced_numerator
  and reduced_denominator are pointers to variables in shich the function will store the 
  numerator and denominator of the fraction once it has been reduced to lowest terms.
*/

#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator) {
    int n = numerator, d = denominator, r;

    while (d != 0) {
        r = n % d;
        n = d;
        d = r;
    }

    *reduced_numerator = numerator / n;
    *reduced_denominator = denominator / n;
}

int main() {

    int n, d, num, denom;

    printf("Enter a fraction: ");
    scanf("%d /%d", &n, &d);

    reduce(n, d, &num, &denom);

    printf("In lowest terms: %d/%d\n", num, denom);

    return 0;
}