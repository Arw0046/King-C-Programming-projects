/*The program square.2c of section 6.3 will fail (usually by printing strange answers) 
  if i*i exceeds the maximum int value. Run the program and determine 
  the smallest value of n that causes failure. Try changing the type of i to short
  and running the program again. Then try long. From these exiperiments, what can you 
  conclude about the number of bits used to store integer types by your machine.*/

#include <stdio.h>

int main() { 

    short i;
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        printf("%10hd%10hd\n", i, i*i);
    }

    return 0;
}

//this computer is a 64 bit computer
//this computer can store int values up to 2147483647, which is 32 bits
//this computer can store short values up to 32767, which is 16 bits
//this computer can store long values up to 9223372036854775807, which is 64 bits