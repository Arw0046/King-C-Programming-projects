/* Write program that breaks down an ISBN entered by the user:

   Enter ISBN: ...
   GS1 prefix: ...
   Group identifier: ...
   Publisher Code: ...
   Item Number: ...
   Check digit: ... */

    #include <stdio.h>

    int main() {
    int gsi, group_identifier, publisher_code, item_number, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &group_identifier, &publisher_code, &item_number, &check_digit);

    printf("\nGSI prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d", 
            gsi, group_identifier, publisher_code, item_number, check_digit);
    return 0;

   }