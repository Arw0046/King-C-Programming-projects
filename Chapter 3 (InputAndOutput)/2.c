/* Write a program that formats product information entered by the user. A session with the program 
   should look like this:
   
   Enter item number: ...
   Enter unit price: ...
   Ener purchase date (mm/dd/yyyy): ../../....
   
   Item       Unit      Purchase 
              Price     Date
    ...       $...      ../../....  
    
    The item number and the date should be left justified. The unit price should be right justified.
    Allow dollar amounts up to $9999.99.*/

#include <stdio.h>

int main() {
    float price;
    int item,day,month,year;
    printf("Enter item number: ");
    scanf("%d", &item );

    printf("\nEnter unit price: ");
    scanf("%f", &price );

    printf("\nEnter purchace date: ");
    scanf("%d/%d/%d", &month, &day, &year );

    printf("\nItem \t\tUnit \t\tPurchase ");
    printf("\n \t\tPrice \t\tDate ");
    printf("\n%d \t\t$%6.2f \t%2.2d/%2.2d/%4.4d ", item, price, month, day, year);
    
    return 0;
}