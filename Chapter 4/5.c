/*Rewrite the upc.c program from section 4.1 so that the user enters 11 digits at one time, 
  instead of entering one digit at a time.*/

  #include <stdio.h>

  int main() {

    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11;
    int sum_1, sum_2, total;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
           &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);
    
    sum_1 = n1 + n3 + n5 + n7 + n9 + n11;
    sum_2 = n2 + n4 + n6 + n8 + n10;
    total = (3 * sum_1) + sum_2;

    printf("\nCheck Digit: %d", 9 - ((total - 1) % 10));

    return 0;
  }