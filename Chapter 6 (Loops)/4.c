/*Add a loop to the broker.c program of Section 5.2 so that the user can enter more than one
  trade and the program will calculate the commission on each.
  The program should terminate when you enter 0 as a trade value.*/

#define NO_VAL 1;               // wanted to practice with macros. Used to initalize value to nonzero.

#include <stdio.h>
#include <stdbool.h>

int main() {

    float commission;
    float value = NO_VAL;

    while (true) {
        printf("Enter value of trade: ");
        scanf("%f", &value);

        if ( value <= 0.00f) { return 0; }
        else if (value < 2500.00f) { commission = 30.00f + 0.107f * value; }
        else if (value < 6250.00f) { commission = 56.00f + 0.0066f * value; }
        else if (value < 20000.00f) { commission = 76.00f + 0.0034 * value; }
        else if (value < 50000.00f) { commission = 100.00f + 0.0022f * value; }
        else if (value < 500000.00f) { commission = 155.00f + 0.0011f * value; }
        else commission = 255.00f + 0.0009f * value;

        if (commission < 39.00f) commission = 39.00f;

        printf("Commission: $%.2f\n", commission);
    }

    return 0;

}