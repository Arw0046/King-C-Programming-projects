/*Write a program that asks the user to enter a series of integers(which it stores in an array),
  then sorts the integers by calling the function selection_sort. When given an array with n 
  elements, selection_sort must do the following...
  
  1. Search the array to find the largest integer, then move it to the last position in the array.
  2. Call itself recursively to sort the n-1 elements of the array.
*/

#include <stdio.h>

void selection_sort(int a[], int n) {
    int  i, larg_i = 0;


    if (n == 0) return;

    for (i = 1; i < n; ++i) {
        if (a[i] > a[larg_i]) larg_i = i;
    }

    i = a[n - 1];
    a[n - 1] = a[larg_i];
    a[larg_i] = i;

    selection_sort(a, n - 1);
}

int main() {

    int i, j, arr[20] = {0};

    printf("Enter a series of integers: ");

    for (i = 0, j = 0; i < 10; ++i, ++j) {
        scanf("%d", &arr[i]);
    }

    selection_sort(arr, j);

    for (i = 0; i < j; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;

}