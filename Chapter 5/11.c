/*Write a program that asks the user for a two digit number,
  then prints the english word for that number*/

#include <stdio.h>

int main() {
                 
    int times1, times10;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &times10, &times1);

    printf("You entered the number: ");
    if(times10 != 1) {
        switch(times10) {
            case 0: break;
            case 2: printf("twenty"); break;
            case 3: printf("thirty"); break;
            case 4: printf("forty"); break;
            case 5: printf("fifty"); break;
            case 6: printf("sixty"); break;
            case 7: printf("seventy"); break;
            case 8: printf("eighty"); break;
            case 9: printf("ninety"); break;
        }

        if(times10 != 0 && times1!= 0) printf("-");
        
        switch(times1){
            case 0: if(times10 != 0) break;
                    else printf("zero"); break;   
            case 1: printf("one"); break;
            case 2: printf("two"); break;
            case 3: printf("three"); break;
            case 4: printf("four"); break;
            case 5: printf("five"); break;
            case 6: printf("six"); break;
            case 7: printf("seven"); break;
            case 8: printf("eight"); break;
            case 9: printf("nine"); break;
        }
    }
    else switch(times1){
            case 0: printf("ten");break;
            case 1: printf("eleven"); break;
            case 2: printf("twelve"); break;
            case 3: printf("thirteen"); break;
            case 4: printf("fourteen"); break;
            case 5: printf("fifteen"); break;
            case 6: printf("sixteen"); break;
            case 7: printf("seventeen"); break;
            case 8: printf("eighteen"); break;
            case 9: printf("nineteen"); break;
    }

    return 0;
}