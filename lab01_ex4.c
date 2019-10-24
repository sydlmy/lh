//
// Created by Administrator on 2019/10/24 0024.
//

/*
 * Exercise 04
-----------

Write a C program able to compute the product of two matrices
containing real values.
The program has to proceed as follows:
1. It defines two matrix's m1 and m2 of "physical" size equal to
   MAX_DIM rows and MAX_DIM columns, where MAX_DIM is a pre-defined
   constant.
2. It reads the "logical" (actual) size of the two matrices:
   r1 rows and c1 columns for m1
   and
   r2 rows and c2 columns for m2.
3. It verifies whether r1, c1, r2, and c2 are smaller than MAX_DIM,
   and whether c1==r2 (i.e., it is possible to compute the product).
4. It reads m1 and m2 from standard input.
5. It computes the product
   m3 = m1 x m2
   with m3 having r1 rows and c2 columns.
6. It prints-out m3 on standard output.

Example
-------

If m1 is the following on (with 2 rows and 3 columns)
 1.00    2.00    3.00
 4.00    5.00    6.00
and m2 is the next one (with 3 rows and 2 columns)
 1.00    2.00
 3.00    4.00
 5.00    6.00
the output matrix must be the following:
22.00   28.00
49.00   64.00
 */


#include <stdlib.h>
#include <stdio.h>
#define MAX_DIM 4


int vector_product(int r1,int c1,int r2,int c2){

    double m1[MAX_DIM][MAX_DIM];
    double m2[MAX_DIM][MAX_DIM];
    double m3[r1][c2];

    if(r1 <= MAX_DIM && c2<=MAX_DIM && r2 <=MAX_DIM && c2<=MAX_DIM && c1==r2){
        printf("It is possible to compute the product.\n");
    }
    printf("pls input the m1.\n");

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            printf("pls input the m1[%d][%d]=",i,j);
            scanf("%lf\n",&m1[i][j]);
        }
    }
    printf("m1 input complete.\n");
    printf("pls input the m2.\n");

    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            printf("pls input the m2[%d][%d]=",i,j);
            scanf("%lf\n",&m2[i][j]);
        }
    }
    printf("m2 input complete.\n");
    //compute the product m3 = m1 x m2
    for (int i = 0; i < c1; ++i) {
        for (int j = 0; j < r2; ++j) {
            m3[i][j] = m1[i][j]*m2[i][j] + m1[i][j+1]*m2[i+1][j] + m1[i][j+2]*m2[i+2][0];

        }
    }
    printf("the result is m3:\n");
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            printf("%lf ",m3[i][j]);
        }
        printf("\n");
    }

}

int main(){


    //input the r1 c1,r2 c2
    vector_product(2,3,3,2);




}
