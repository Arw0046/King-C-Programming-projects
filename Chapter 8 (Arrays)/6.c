/*The prototypical Internet newbie is a fellow named B1FF, who has a unique way of writing 
  messages. Heres a typical B1FF communique:

  H3Y DUD3, C 15 RiLLY C00L!!!!!!!!!!

  Write a "B1FF filter" that reads a message entered by the user and translates it into B1FF speak:

  Your Program should convert the message to upper-case letters, subsitute digits for certain 
  letters(A->4, B->8, E->3, I->1, O->0, S->5), and then append 10 or so exclamation marks.
  Hint: Store the original message in an array of characters, then go back through the array,
  translating and printing characters one by one.*/

#include <stdio.h>
#include <ctype.h>

#define MAX 50

int main() {

    char c, sentance[MAX] = {0};
    int i = 0;

    printf("Enter a message: ");
    
    while (( c = getchar()) != '\n' && i < MAX) {
        sentance[i] = c;
        ++i;
    }

    printf("In B1FF speak: ");
    
    for (int j = 0; j < MAX; ++j) {
        switch (c = toupper(sentance[j])) {
            case 'A' : c = '4'; break;
            case 'B' : c = '8'; break;
            case 'E' : c = '3'; break;
            case 'I' : c = '1'; break;
            case 'O' : c = '0'; break;
            case 'S' : c = '5'; break;
            default : break;
        }

        putchar(c);
    }

    printf("!!!!!!!!!!");

    return 0;
}
