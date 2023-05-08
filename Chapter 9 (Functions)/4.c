/*Modify Programming Project 16 from Chapter 8 so that it includes the following functions:

  void read_word(int counts[26]);
  bool equal_array(int counts1[26], int counts2[26]);
  
  main will call read_words twice, once for each of the two words entered by the user. 
  As it reads a word, read_word will use the letters in the word to update the counts 
  array, as described in the origianl project. main will declare two arrays, one for each word.
  These arrays are used to track how many times each letter occurs in the words. main 
  will then call equal_array, passing it the two arrays. equal_array will return true if 
  the elements in the arrays are identical and false otherwise.
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define ALPHABET 26

void read_word(int counts[ALPHABET]) {
  char c;

  while ((c = getchar()) != '\n') {
    if (isalpha(c)) {
      ++counts[tolower(c - 'a')];
    }
  }
}

bool equal_array(int counts1[ALPHABET], int counts2[ALPHABET]) {
  for (int i = 0; i < ALPHABET; ++i) {
    if (counts1[i] - counts2[i] != 0) return false;
  }
  return true;
}

int main() {

  int word_1[ALPHABET] = {0}, word_2[ALPHABET] = {0};

  printf("Enter first word: ");
  read_word(word_1);

  printf("Enter second word: ");
  read_word(word_2);

  if (equal_array(word_1, word_2)) printf("The words are anagrams!");
  else printf("The words are not anagrams.");

    return 0;



}