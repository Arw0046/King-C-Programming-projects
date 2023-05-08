/*Modify programming project 9 from Chapter 8 so that it includes the following functions:

  void generate_random_walk(char walk[10][10]);
  void print_array(char walk[10][10]);
  
  main first calls generate_random_walk, which initializes the array to contain '.' characters and then replaces 
  some of these characters by the letters  A through Z, as described in the original project.
  main then calls print_array to display the array on the screen.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define PATH 4

void generate_random_walk(char walk[][10]) {
    char  ch = 'A';
    int m = 0, n = 0, w = 0;
    int up = 0, down = 0, left = 0, right = 0;

    srand((unsigned) time(NULL));

    walk[m][n] = ch++;

    
    while (ch <= 'Z') {
        up = down = left = right = w = 0;

        if (m + 1 < 10 && walk[m + 1][n] == 0 ) down = 1;
        if (m - 1 >= 0 && walk[m - 1][n] == 0) up = 1;
        if (n + 1 < 10 && walk[m][n + 1] == 0) right = 1;
        if (n - 1 >= 0 && walk[m][n - 1] == 0) left = 1;

        if (up + down + left + right == 0) break;
        
        w = rand() % PATH;

        switch (w) {
            case 0 : if (down) { walk[++m][n] = ch++; break; }
            case 1 : if (up) { walk[--m][n] = ch++; break; }
            case 2 : if (right) { walk[m][++n] = ch++; break; }
            case 3 : if (left) { walk[m][--n] = ch++; break; }
            default : break;
        }
    }
}
void print_array(char walk[10][10]) {
    for (int i = 0; i < 10; ++i) {
        for ( int j = 0; j < 10; ++j) {
            if (walk[i][j] == 0) walk[i][j] = '.';
            printf("%c ", walk[i][j]);
        }

        printf("\n");
    }
}

int main() {

    char walk[10][10] = {0};

    generate_random_walk(walk);
    print_array(walk);

    return 0;

}