/*Modify the reverse.c program of Section 8.1 to use the expression (int) 
  (sizeof(a) / sizeof(a[0])) (or a macro with this value) for the array length. */

#include <stdio.h>
#include <stdbool.h>

#define N 10
#define  N_SIZE (int) (sizeof(a) / sizeof(a[0]))

int main() {

    int a[N], i;
    printf("Enter %d numbers: ", 10);
    for (i = 0; i < N_SIZE; ++i) scanf("%d", &a[i]);

    printf("In reverse order: ");
    for (i = N_SIZE-1; i >= 0; --i) printf(" %d", a[i]);
    printf("\n");

    return 0;
}