/*Modify the program from section 3.2 so that the user enters both the fractions at the same time,
seperated by a plus sign. */

#include <stdio.h>

int main() {
    int num1, denum1 ,num2, denum2, result_num, result_denum;

    printf("Enter two fractions seperated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denum1, &num2, &denum2);
    result_num = (num1 * denum2) + (num2 * denum1);
    result_denum = denum1 * denum2;

    printf("\nThe sum is: %d/%d", result_num, result_denum );

    return 0;
}