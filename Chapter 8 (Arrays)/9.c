/*Write a program that genrates a random walk across a 10 x 10 array. The array will
  contain characters(all '.' initially). The program must randomly walk from element to
  element, always going up, down, left, or right by one element. The elements visitied 
  by the program will be labeled with the letters A through Z, in the order visited.
  
  Hint: Use the srand and rand functions to generate random numbers. After genrating 
  a number, look at its remainder when divided by 4. There are four possible values for
  the remainder -0,1,2, and 3- indicating the direction of the next move. Before performing
  a move, check that (a) it wont go outside the array, and(b) it doesnt take us to an element
  that already has a letter assigned. If either condition is violated, try moving in another
  direction. If all four directions are blocked, the program should terminate
.*/

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#define PATH 4

int main() {
    char  ch = 'A', field[10][10] = {0};
    int m = 0, n = 0, walk = 0;
    int up = 0, down = 0, left = 0, right = 0;

    srand((unsigned) time(NULL));

    field[m][n] = ch++;

    
    while (ch <= 'Z') {
        up = down = left = right = walk = 0;

        if (m + 1 < 10 && field[m + 1][n] == 0 ) down = 1;
        if (m - 1 >= 0 && field[m - 1][n] == 0) up = 1;
        if (n + 1 < 10 && field[m][n + 1] == 0) right = 1;
        if (n - 1 >= 0 && field[m][n - 1] == 0) left = 1;

        if (up + down + left + right == 0) break;
        
        walk = rand() % PATH;

        switch (walk) {
            case 0 : if (down) { field[++m][n] = ch++; break; }
            case 1 : if (up) { field[--m][n] = ch++; break; }
            case 2 : if (right) { field[m][++n] = ch++; break; }
            case 3 : if (left) { field[m][--n] = ch++; break; }
            default : break;
        }
    }

    for (int i = 0; i < 10; ++i) {
        for ( int j = 0; j < 10; ++j) {
            if (field[i][j] == 0) field[i][j] = '.';
            printf("%c ", field[i][j]);
        }

        printf("\n");
    }

    return 0;
}