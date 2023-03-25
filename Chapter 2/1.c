#include <stdio.h>

int main() {
    int m,d,y;
    
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&m,&d,&y);

    printf("You entered rhe date %d/%d/%d",y,m,d);

    return 0;
}