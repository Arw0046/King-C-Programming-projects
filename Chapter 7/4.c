/*write a program that translates an alphebetic phone number into numeric form.
  If the original phone number contains nonalphebetic characters, leave them unchanged.
  You may assume that any ketters entered by the user are upper case.*/

#include <stdio.h>

int main() {

    char ch;

    printf("Enter phone number: ");

    while ((ch = getchar()) != '\n') {
        switch (ch) {
            case 'A' :  case 'a' : case 'B' : case 'b' : case 'C' : case 'c' : 
                ch = '2';
                break;
            case 'D' :  case 'd' : case 'E' : case 'e' : case 'F' : case 'f' : 
                ch = '3';
                break;
            case 'G' :  case 'g' : case 'H' : case 'h' : case 'I' : case 'i' : 
                ch = '4';
                break;
            case 'J' :  case 'j' : case 'K' : case 'k' : case 'L' : case 'l' : 
                ch = '5';
                break;
            case 'M' :  case 'm' : case 'N' : case 'n' : case 'O' : case 'o' : 
                ch = '6';
                break;
            case 'P' :  case 'p' : case 'R' : case 'r' : case 'S' : case 's' : 
                ch = '7';
                break;
            case 'T' :  case 't' : case 'U' : case 'u' : case 'V' : case 'v' : 
                ch = '8';
                break;
            case 'W' :  case 'w' : case 'X' : case 'x' : case 'Y' : case 'y' : 
                ch = '9';
                break;
            default : break;
        }
        putchar(ch);
    } 

    return 0;
    
}