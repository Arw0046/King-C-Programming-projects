/*Write a program that asks the user to enter two integers,
  then calulates and displays their greatest common divisor.*/

#include <stdio.h>

int  main() {
    int n1, n2, m, n, r;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    if( n1 < n2) { m = n2; n = n1; }
    else { m = n1; n = n2; } 

    while(n != 0){
        r = m % n;
        m = n;
        n = r;
    }
    
    printf("Greatest common divisor: %d", m);

    return 0;

  }