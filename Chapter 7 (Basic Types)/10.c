/*Write a program that counts the number of vowels in a sentace.*/

#include <stdio.h>
#include <ctype.h>

int main() {

    char ch;
    int sum = 0; 

    printf("Enter a sentsnce: ");
    
    while ((ch = getchar()) != '\n') {
        tolower(ch);
        switch(ch) {
            case 'a' : case 'e' : case 'i' : case 'o' : case 'u' : ++sum; break;
            default : break;
        }
    }

    printf("Your sentance contains %d vowels.", sum);

    return 0;
}