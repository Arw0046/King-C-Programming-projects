/*Write a program that reads a 5 x 5 array of integers and then prints the row sums and the 
  column sums.*/

#include <stdio.h>

int main() {

    int n_array[5][5];
    int sum  = 0;
    
    for (int i = 0; i < 5; ++i) {
        printf("Enter row %d: ", i+1);

        for (int j = 0; j < 5; ++j) {
            scanf("%d", &n_array[i][j]);
        }
    }

    printf("Row totals: ");

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            sum += n_array[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }

    printf("\nColumn totals: ");

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            sum += n_array[j][i];
        }
        printf("%d ", sum);
        sum = 0;
    }

    return 0;
}