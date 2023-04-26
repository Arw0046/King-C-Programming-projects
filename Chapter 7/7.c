/*Modify Programming Project 6 form Chapter 3 so that the user can add, subtract, multiply
  or divide two fractions (by entering either +,-,*,or/ between the fractions.)*/

#include <stdio.h>

int main() { 

    int num1, denum1 ,num2, denum2, result_num, result_denum, n, dn, r;
    char operator;

    printf("Enter two fractions seperated by a +,-,*,or/ sign: ");
    scanf("%d/%d%c%d/%d", &num1, &denum1, &operator, &num2, &denum2);

    switch(operator) {
        case '+' :
            result_num = (num1 * denum2) + (num2 * denum1);
            result_denum = denum1 * denum2;
            break;
        case '-' :
            if (denum1 != denum2) {
            result_num = (num1 * denum2) - (num2 * denum1);
            result_denum = denum1 * denum2;
            break;
            }
            else result_num = num1-num2;
            result_denum = denum1;
            break;
        case '*' :
            result_num = num1 * num2;
            result_denum = denum1 * denum2;
            break;
        case '/' :
            result_num = num1 * denum2;
            result_denum = denum1 * num2;
            break;
    }

    n = result_num;
    dn = result_denum;

    while ( dn != 0) {
        r = n % dn;
        n = dn;
        dn = r;
    }

    if ( result_denum / n != 1) {
    printf("\nThe final amount is: %d/%d", result_num / n, result_denum / n );
    }
    else printf("The final amount is: %d", result_num / n);

    return 0;

}