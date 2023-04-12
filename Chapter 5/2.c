/*Write a program that asks the user for a 24-hour time, 
  then displays the time in 12-hour form.*/

  #include <stdio.h>

  int main() {

    int hr24, hr12, min;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hr24, &min);

    if(hr24 < 12 && hr24 >= 0) {
        if(hr24 != 0) hr12 = hr24;
        else hr12 = 12;
    }
    else if(hr24 <= 24 && hr24 > 0) hr12 = hr24-12;
    else { hr12 = 0; hr24 = 0; min = 0; }                                 //Set time to 0:00 AM if hrs out of range

    if(min < 0 ||  min > 59) { hr24 = 0; min = 0; }                           //Set time to 0:00 AM if mins are out of range

    printf("Equivalent 12-hour time: %.2d:%.2d ", hr12, min);
    if(hr24 <=12) { printf("AM"); }
    else printf("PM");

  } 