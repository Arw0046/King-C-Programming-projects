/*Modify Prpgramming project 8 from Chapter 5 so that the user enters a time using the 12
  hour clock. The input will have the form hours: minutes followed by either A,P,AM,or PM
  (either lower case or upper case). White space is allowed (but not required) between the
  numerical time and the AM/PM indicator. There is no need to test for errors.*/

#include <stdio.h>
#include <ctype.h>

int main() {

    int hr, min, time_n_min;
    char ch;

    int d1 = 480, d2 = 583, d3 = 679, d4 = 767, d5 = 840, d6 = 945, d7 = 1140, d8 = 1305;

    printf("Enter a time: ");
    scanf("%d:%d %c", &hr, &min, &ch);

    printf("Closest departure time is ");

    time_n_min = (((toupper(ch) == 'A' ? 0 : 12) + hr) * 60) + min;

    if (time_n_min <= d1 + (d2 - d1) / 2)
        printf("8:00 a.m., arriving at 10:16 a.m.\n");
    else if (time_n_min < d2 + (d3 - d2) / 2)
        printf("9:43 a.m., arriving at 11:52 a.m.\n");
    else if (time_n_min < d3 + (d4 - d3) / 2)
        printf("11:19 a.m., arriving at 1:31 p.m.\n");
    else if (time_n_min < d4 + (d5 - d4) / 2)
        printf("12:47 p.m., arriving at 3:00 p.m.\n");
    else if (time_n_min < d5 + (d6 - d5) / 2)
        printf("2:00 p.m., arriving at 4:08 p.m.\n");
    else if (time_n_min < d6 + (d7 - d6) / 2)
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
    else if (time_n_min < d7 + (d8 - d7) / 2)
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
    else
        printf("9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}