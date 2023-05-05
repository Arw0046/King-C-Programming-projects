/*Modify the repdigit.c program so that it prints a table showing how 
  many times each digit appears in the number.*/

#include <stdio.h>
#include <stdbool.h>

int main() {

  bool digit_seen[10] = {false};
  int times_seen[10] = {0};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    ++times_seen[digit]; 
    n /= 10;
  }

  printf("Digits: \t");
  for (int i = 0; i < 10; ++i) {
    printf("%d ", i );
  }

  printf("\nOccurances: \t");
  for (int i= 0; i < 10; ++i) {
    printf("%d ", times_seen[i]);
  }

  return 0;

}