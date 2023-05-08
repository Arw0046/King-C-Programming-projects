/*Write a program that tests whether two words are anagrams.
  Write a loop that reads the first word, character by character, using an array
  of 26 integers to keep track of how many times each letter has been seen.
  Use another loop to read the second word,except this time decrementing the 
  corresponding array element as each letter is read. Both loops should ignore
  any characters that arent letters, and both should treat upper case letters the
  same way as lower case letters.*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define ALPHABET 26

int main() {

    char c;
    int letters[ALPHABET] = {0};
    bool is_anagram = true;

    printf("Enter first word: ");

    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            ++letters[tolower(c - 'a')];
        }
    }

    printf("Enter second word: ");

    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            --letters[tolower(c - 'a')];
        }
    }

    for (int i = 0; i < ALPHABET; ++i) {
        if (letters[i] != 0) {is_anagram = false; break; }
    }

    if (is_anagram) printf("The words are anagrams!");
    else printf("The words are not anagrams.");

    return 0;

}