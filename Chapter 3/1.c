/* Write a program that accepts a date from the user in the form mm/dd/yyyy, 
   and then display it in the form yyyy/dd/mm. */

#include <stdio.h>

int main() {
    int m,d,y;
    
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&m,&d,&y);

    printf("You entered the date %d/%d/%d",y,m,d);

    return 0;
}