/*Write a program that reverses the words in a sentance. 
  Hint: Use a loop to read the characters one by one and store them in a one 
  dimensional char array. Have the loop stop at a period, question mark, or 
  exclamation point(the terminating character), which is saved in a seperate
  char variable. Then use a loop to search backward through the array for the beginning
  of the last word. Print the last word, then search backward for the next to last word.
  Repeat until the beginning of the array is reached. Finally, print the terminating character.
*/

#include <stdio.h>

#define MAX 100
#define SIZE (int) (sizeof(sent) / sizeof(sent[0]))

int main() {

    int m = 0, word_cnt = 0;
    char c, terminating_char;
    char sent[MAX] = {0};

    printf("Enter a sentance: ");
    
    while ((c = getchar()) != '\n') {
        switch (c) {
            case '.' : case '!' : case '?' : terminating_char = c; break;
            default : sent[m++] = c;
        }
    }

    for (int i = SIZE; i >= 0; --i) {
        if (sent[i] != ' ' && i != 0) { ++word_cnt; }
        else if (i == 0) {
            ++word_cnt; 
            for (int j = i; word_cnt >= 0; --word_cnt) { putchar(sent[j++]); }
        }
        else { for (int j = i; word_cnt >= 0; --word_cnt) { putchar(sent[++j]); }
            putchar(' '); 
        }
    }
    putchar(terminating_char);
}