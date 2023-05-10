/*The power function of section 9.6 can be made faster by having it calculate x^n in a 
  different way. We first notice that if n is a power of 2, then x^n can be computed by squaring.
  For example, x^4 is the square of x^2, so x^4 can be computed using only two muliplications instead 
  of three. As it happens, this technique can be used even when n is not a power of two. If n is 
  even, we use the formula x^n = (x^n/2)^2. If n is odd, then x^n = x*x^n-1. Write a recursive 
  function that computes x^n. (The recursion ends when x == 0, in which case the function returns 1.)
  To test your function, write a program that asks the user to enter values for x and n, calls 
  power to compute x^n, and then displays the value returned by the function.
*/

#include <stdio.h>

int power(int x, int n) {
    int i;

    if ( n == 0) return 1;

    if (n % 2 == 0) {
        i = power(x, n / 2);
        return i * i;
    }
    return x * power(x, n - 1);
    
}

int main() {

    int x, n;

    printf("Enter a value with an exponent (x^y):  ");

    scanf("%d^%d", &x, &n);

    printf("%d", power(x, n));

    return 0;
    
}