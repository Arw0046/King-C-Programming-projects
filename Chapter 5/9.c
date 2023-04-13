/*Write a program that prompts the user to enter two dates and indicates which date comes first on the calender*/

#include <stdio.h>
#include <stdbool.h>

int main() {

    int m1, d1, y1, m2, d2, y2;
    bool date1_is_smaller = true;
    bool equal_dates = false;

    printf("Enter first date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);

    printf("Enter second date (mm/dd/yyyy):" );
    scanf("%d/%d/%d", &m2, &d2, &y2);

    if(y1 < y2) {}                                       //do nothing if true, since bool has been initialized to true
    else if(y1 == y2) {
        if(m1 < m2) {}
        else if(m1 == m2) {
            if(d1 < d2) {}
            else if(d1 == d2) { date1_is_smaller = false; equal_dates = true; }
            else date1_is_smaller = false;
        } 
        else date1_is_smaller = false;
    }
    else date1_is_smaller = false;

    if(date1_is_smaller) {printf("%.2d/%.2d/%.4d is earlier than %.2d/%.2d/%.4d ", m1, d1, y1, m2, d2, y2); }
    else if(!date1_is_smaller) { 
        if(!equal_dates) printf("%.2d/%.2d/%.4d is earlier than %.2d/%.2d/%.4d ", m2, d2, y2, m1, d1, y1);
        else printf("Both dates are equal!");
    }

   return 0;

}