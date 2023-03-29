/*  Write a program that allows the user to enter a telephone number in the form (xxx) xxx-xxxx 
    and then displays the number in the form xxx.xxx.xxxx: */

    #include <stdio.h>

    int main() {
    int area_code,mid,lastfour;

    printf("Enter phone number: ");
    scanf("(%d) %d-%d", &area_code, &mid, &lastfour);
    
    printf("You entered: %.3d.%.3d.%.4d", area_code, mid, lastfour);

    return 0;
    }