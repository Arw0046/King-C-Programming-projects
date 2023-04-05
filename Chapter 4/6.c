/*European countires use a 13-digit code, known as a European Article Number (EAN)
  instead of the 12-digit Universal Product Code (UPC) found in North America.
  with a check digit, just as UPC does. The technique for calculating the check
  digit is also the same. Modify the upc.c program from 4.1 so that it calculates 
  the check digit for an EAN. The user will enter the first 12 digits as a single number.*/

#include <stdio.h>

int main() {

    int d, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;
    int sum_1, sum_2, total;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &d, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    sum_1 = n2 + n4 + n6 + n8 + n10 + n12;
    sum_2 = d + n3 + n5 + n7 + n9 + n11;
    total = (3 * sum_1) + sum_2;

    printf("Check Digit: %d", 9 - ((total -1) % 10));

    return 0;
}