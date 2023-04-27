/*Write a program that uses Newtons Method to compute the square root of a  floating-
  point number. Let x be the number entered by the user. Newtons method requires an initial 
  guess y for the square root of x. Successive guesses are found by computing the average of y and x/y. 
  For greater accuracy, use variable of type double rather than float. Have the program terminate after 
  the absolute value of the differense between the old value of y and the new value of y is less than 
  the product of 0.00001 and y. Hint: Call the fabs function to find the absolute value of a double.*/

#include <stdio.h>
#include <math.h>

int main() {

  double x, y = 1.0, old_y, avg;

  printf("Enter a positive number: ");
  scanf("%lf", &x);

  while ((0.00001 * y) < fabs(old_y - y)) {
    avg = (y + (x / y)) / 2;
    old_y = y;
    y = avg;
  }

  printf("Square root: %f", avg);
  return 0;

}