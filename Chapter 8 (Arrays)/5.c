/*Modify the interest.c program of section 8.1 so that it compounds interest monthly
  instead of annually. The form of the output shouldnt change; the balance should still be
  shown at annual intervals.*/

#include <stdio.h>
#include <math.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00
#define MONTHLY_COMPOUND (double) pow(1 + (((low_rate + i) * 0.01) / 12), 12)

int main() {

    int i, low_rate, num_years, year;
    double value[5];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for (i = 0; i < NUM_RATES; ++i) { 
        printf("%6d%%", low_rate +i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (year = 1; year <= num_years; ++year) {
        printf("%3d     ", year);
        for (i = 0; i < NUM_RATES; ++i) {
            value[i] *= MONTHLY_COMPOUND;
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}