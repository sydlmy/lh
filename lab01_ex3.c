//
// Created by Administrator on 2019/10/14 0014.
//

/*
 * Exercise 03
-----------

Write a C program able to:
- Read a matrix m1 of R rows and C columns of integer values
- Compute a matrix m2 of R rows and C columns such that
  - m2[i][j] is equal to zero
    if m1[i][j] is equal to zero.
  - m2[i][j] is the factorial number of -m1[i][j]
    if m1[i][j] is a negative number.
  - m2[i][j] is the smallest power of 10 larger than m1[i][j]
    if m1[i][j] is a positive number.

Example
-------

Let R and C be equal to 3 and 5 respectively.
Let m1 be the following:

 9   23   155   -1    33
 0   -2    -4    8    -6
20   -1     0    0   499

m2 has to be:

10 100 1000 1 100
0 2 24 10 720
100 1 0 0 1000
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main() {
    int R = 3;
    int C = 5;
    float m1[R][C];
    float m2[R][C];
    float sum =1;

    //read the matrix m1
    //i means R,j means C
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            printf("m1[%d][%d]=",i,j);
            scanf("%f",&m1[i][j]);
        }

    }
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){

            printf("m1[%f][%f]=%f ",i,j,m1[i][j]);

        }
        printf("\n");
    }

    //according the condition of m1,compute the m2
    for(int i=0;i<R;i++){
        for (int j = 0; j < C; ++j) {
            //first situation
            if(m1[i][j] == 0){
                m2[i][j] = 0;
            }else if(m1[i][j] < 0){                       //second situation
                for(int i=0;i<m1[i][j] + 1;i++){
                    sum = sum*i;
                    m2[i][j] = sum;

                }
            }else if(m1[i][j]>0){                         //third situation
                float exp = 0;
                while(exp < m1[i][j]){
                    float k =1;
                    exp = pow(10,k);
                    k = k+1;
                    m2[i][j] = exp;

                }
            }
        }
    }

    //print the solution m2
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            printf("the solution m2 is:");
            printf("%f ",m2[i][j]);

        }
        printf("\n");
    }
return 0;
}
