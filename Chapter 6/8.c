/*Write a program that prints a one month calender. the user specifies the number of days
  in the month and the day of the week on which the calender begins.*/

#include <stdio.h>

int main() {

    int days, starting_day;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week(1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);

    printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");

    for (int i =1; i < starting_day; ++i) printf("\t");

    for (int i = 1, day_of_week = starting_day; i <= days; ++i) {
        if (day_of_week <= 7) { 
            printf("%2d\t", i);
            ++day_of_week;
        }
        else { printf("\n%2d\t", i); day_of_week = 2; }
    }

    return 0;

}