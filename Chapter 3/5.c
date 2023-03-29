/*  Write a program that promps the user to enter the numbers 1-16 in any order
    and then displays them in a 4x4 arrangement followed by sums of the rows, columns, and diagonals.*/

    #include <stdio.h> 

    int main() {
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16;

    printf("Enter the numbers 1-16 in any order: \n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
           &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

    printf("\n%2d %2d %2d %2d \n%2d %2d %2d %2d \n%2d %2d %2d %2d \n%2d %2d %2d %2d\n",
             n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16);

    int r_sum1 = n1+n2+n3+n4;
    int r_sum2 = n5+n6+n7+n8;
    int r_sum3 = n9+n10+n11+n12;
    int r_sum4 = n13+n14+n15+n16;
    int c_sum1 = n1+n5+n9+n13;
    int c_sum2 = n2+n6+n10+n14;
    int c_sum3 = n3+n7+n11+n15;
    int c_sum4 = n4+n8+n12+n16;
    int d_sum1 = n1+n6+n11+n16;
    int d_sum2 = n4+n7+n10+n13;

    
    printf("\nRow sums: %d %d %d %d",r_sum1, r_sum2, r_sum3, r_sum4);
    printf("\nColumn sums: %d %d %d %d",c_sum1,c_sum2,c_sum3, c_sum4);
    printf("\nDiagonal sums: %d %d\n",d_sum1,d_sum2);

    return 0;
    }