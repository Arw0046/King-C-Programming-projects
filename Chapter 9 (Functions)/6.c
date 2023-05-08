/*Write a function that computes the value of the following polynomial: 
  
  3x^5 + 2x^4 - 5x^3 - 7x - 6
  
  Write a program that asks the user to enter a value for x, calls the function to
  compute the value of the polynomial, and then displays the value returned by the function.
*/

#include <stdio.h>
#include <math.h>

double poly_val(double x) {
return 3 * pow(x,5) + 2 * pow(x,4) - 5 * pow(x,3) - pow(x,2) + 7 * x - 6;
}

int main() {

    double x;

    printf("Enter a value for x: ");
    scanf("%lf", &x);
    
    printf("%lf", poly_val(x));

    return 0;


}