/*Modify Programming Project 8 from Chapter 5 so that the departure times are stored in an 
  array and the arrival times are stored in a second array. (The times are integers, representing 
  the number of minutes since midnight.) The program will use a loop to search the array of
  departure times for the one closest to the time entered by the user.*/

#include <stdio.h>
#include <math.h>

int main() {

    int user_time,
        hour,
        minute,
        d_times[8] = {480, 583, 679, 767, 840, 945, 1140, 1305},
        a_times[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438},
        dep, arr;
    char am_pm;

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);
    user_time = hour * 60 + minute;

    for (int i = 0; i < 7; ++i) {
        if (user_time <= d_times[i] + (d_times[i + 1] - d_times[i]) / 2) {
            dep = d_times[i]; 
            arr = a_times[i]; 
            break;
        }
        else { dep = d_times[i + 1]; arr = a_times[i + 1]; }
    }

    if (dep < 720) am_pm = 'a';
    else am_pm = 'p';

    printf("Closest depature time is %d:%.2d %c.m., ", dep / 60, dep % 60, am_pm);
    printf("arriving at %d:%.2d %c.m.", arr / 60, arr % 60, am_pm);

    return 0;
}