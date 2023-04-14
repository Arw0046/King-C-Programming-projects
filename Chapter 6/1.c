/*Write a program that finds the largest number in a series of numbers entered by the user.
  The program must prompt the user to enter numbers ne by one. 
  When the user enters 0 or a negative number, the program must display
  the largest nonnegative number entered. The numbers dont need to be integers.*/

  #include <stdio.h>

  int main() {
 
    float n;
    float largest_num = 0.0f;

    do {
        printf("Enter a number: ");
        scanf("%f", &n);
        if(n > largest_num) largest_num = n;
    }
    while(!(n <= 0) );

    printf("The largest number entered was %f\n", largest_num);

    return 0;

  }