//
// Created by Administrator on 2019/10/14 0014.
//

#include <stdlib.h>

#include <stdio.h>

/*
 * Exercise 02
-----------

Write a C program able to:
- Read two integer values N1 and N2.
- Check whether N1<=DIM and N2<=DIM (DIM is a pre-defined constant
  value).
- Read from standard input an array v1 of N1 integer values
- Compute an array v2 of N1 integer values, where each v2[i] is equal
  to the arithmetic average of
  v1[i-N2], v1[i-N2+1], ..., v1[i-1], v1[i], v1[i+1], ..., v1[i+N2]
  if they exist.
- Print-out v2.

Example
-------

Let us suppose DIM = 100, N1 = 10, N2 = 2, ant let v1 be the following
one:

0   2   3   4  -1  -10   5   1   8   3

Each element of v2[i] has to be equal to the average of at most
5 (2 on the left of v1[i], 2 on the right of v1[i], and v1[i] itself)
elements "around" v1[i], e.g.:

v2[0] = (0 + 2 + 3) / 3 = 1.67
v2[1] = (0 + 2 + 3 + 4) / 4 = 2.25
v2[2] = (0 + 2 + 3 + 4 + (-1)) / 5 = 1.60
v2[3] = (2 + 3 + 4 + (-1) + (-10)) / 5 = -0.40
etc.

As a consequence, the program has to print-out the sub-sequence:
1.67  2.25  1.60  -0.40  0.20  -0.20  0.60  1.40  4.25  4.00



 */


int main(){
    int N1=0;
    int N2=0;
    int DIM =100;
    float v1[N1];
    float v2[N1];

    //read the integer value of N1,N2
    printf("please enter the N1:");
    scanf("%d",&N1);
    printf("N2:");
    scanf("%d",&N2);



     printf("%d\n%d\n",N1,N2);
    // input the v1

        for(int i =0;i<N1;i++){
            if(N1 <= DIM && N2 <= DIM){
                printf("v1[%d] = ",i);
                scanf("%f",&v1[i]);
            }
        }
/*    for(int i=0;i<N1;i++){
        printf("v[%d] = %d\n",i,v1[i]);
    }
*/

    //compute the arithmetic average of the v1
    //and store it in the v2

    for(int i=0;i<N1;i++){
        v2[i]=0;
        int n=0;
        for(int j=-N2;j<N2;j++){
            if((i+j)>=0 && (i+j)<N1) {
                v2[i] = v2[i] + v1[i + j];
                n++;
            }

        }
        v2[i] = v2[i]/n;
    }
    //print the v2
    for(int i=0;i<N1;i++){
        printf("%f",v2[i]);
    }

return 0;
}
