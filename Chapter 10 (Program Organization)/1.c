/*Modify the stack from section 10.2 so that it stores characters instead of integers.
  Next, add a main function that asks the user to enter a series of parentheses and/or braces,
  then indicates whether or not they're properly nested.
  
  Hint: As the program reads characters, have it push each left parenthesis or left brace. When 
  it reads a right parenthesis or brace, have it pop the stack and check that the item popped is a 
  mathching parenthesis or brace. (If not, the parenthesis/brace aren't nested properly.) When 
  the program reads a new-line character, have it check whether the stack is empty; if so, the 
  parenthesis/braces  are matched. If the stack isn't empty (or if stack_underflow is ever called),
  the patentheses aren't matched. If the stack_overflow is called, have the program print the message 
  Stack overflow and terminate immediately.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
bool nested_properly = true;
int top = 0;

void make_empty() { top = 0; }

bool is_empty() { return top == 0; }

bool is_full() { return top == STACK_SIZE; }

void stack_overflow() { printf("Stack overflow"); exit(0);}

void stack_underflow() { nested_properly = false; }

void push(char c) {
    if (is_full()) 
        stack_overflow();
    else contents[top++] = c;
}

char pop() {
    if (is_empty()) 
        stack_underflow();
    else return contents[--top];
}

int main() {

    char c;

    printf("Enter a series of parenthesis/braces: ");

    while ((c = getchar()) != '\n') {

        switch (c) {
            case '[' : case '(' : push(c); break;
            case ']' :
                if (pop() != '[') { printf("Not nested properly."); return 0; } 
                break;
            case ')' : 
                if (pop() != '(') { printf("Not nested properly."); return 0;}
                break; 
            default : printf("Not nested properly."); return 0;
        }

    }

    if (is_empty()) printf("Nested properly!");
    else printf("Not nested properly.");

    return 0;

}