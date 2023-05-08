/*In the SCRABBLE Crossword game, players form words from using small tiles, each containing 
  a letter and a face value. The face value varies from one letter to another, based on the let-
  ers rarity.(Heres the face values: 1:AEILNORSTU, 2:DG, 3:BMCP, 4:FHVWY, 5:K, 8:JX, 10:QZ.)
  Write a program that computes the value of a word by summing the values of the letters.
  Your program should allow any combination of upper and lower case letters.*/

#include <stdio.h>
#include <ctype.h>

int main() {

    char ch;
    int sum = 0;

    printf("Enter a word: ");

    while ((ch = getchar()) != '\n') {
        switch (toupper(ch)) {
            case 'A' : case 'E' : case 'I' : case 'L' : case 'N' : case 'O' : case 'R' : case 'S' : case 'T' : case 'U' :
                sum += 1;
                break;
            case 'D' : case 'G' :
                sum += 2;
                break;
            case 'B' : case 'M' : case 'C' : case 'P' :
                sum += 3;
                break;
            case 'F' : case 'H' : case 'V' : case 'W' : case 'Y' :
                sum += 4;
                break;
            case 'K' :
                sum += 5;
                break;
            case 'J' : case 'X' :
                sum += 8;
                break;
            case 'Q' : case 'Z' :
                sum += 10;
                break;
            default : printf("%c isnt recognizable\n", ch); break;
        }
    }

    printf("Scrabble value: %d", sum);

    return 0;
}