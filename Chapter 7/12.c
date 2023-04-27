/*Write a program that evaluates an expression. The operands in the expression are 
  flating-point numbers. The operators are +,-,*,/. The expression is evaluated 
  from left to right, and no operator takes precedence over any other.*/

#include <stdio.h>

int main() {

    float val, total;
    char ch; 

    printf("Enter an expression: ");
    scanf("%f", &total);

    while ((ch = getchar()) != '\n') {
        switch(ch) {
            case '+' :
                scanf("%f", &val);
                total += val;
                break;
            case '-' :
                scanf("%f", &val);
                total -= val;
                break;
            case '*' :
                scanf("%f", &val);
                total *= val;
                break;
            case '/' :
                scanf("%f", &val);
                total /= val;
                break;
            default : break;
        }

    }

    printf("Value of expression: %f", total);
    return 0;

}