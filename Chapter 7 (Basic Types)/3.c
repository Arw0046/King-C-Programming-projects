/*modify the sum2.c program from section 7.1 to sum a series of double values.*/

#include <stdio.h>

int main() {

    double n = 1.00, sum = 0.00;  // initalized n so the while loop wont skip at the start.

    printf("This program prints a series of doubles.\n");
    printf("Enter doubles (0.00 to terminate): ");

    while (n != 0.00) {
        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is: %lf\n", sum);

    return 0;
    
}
