#include<stdlib.h>
#include<stdio.h>
/*
*

Write a C program able to:
- Read an array of integer values of size DIM, where DIM is a
  pre-defined constant.
- Find and print-out the longest ascending sub-sequence on integer
  values within the array.


Example
-------

Let DIM be equal to 15, ant let the array be the following one:

2   3   4  -1  -10   5   6   8   11  -9   8  -10   9   3   0

The program has to print-out the sub-sequence:

-10   5   6   8   11
*/
int main(){
     int DIM = 15;
    int s[DIM];
    int flag = 0;
//read the array we need,and store them in s[DIM]
        printf("please enter the array:");
    for(int i = 0;i<DIM;i++){
        scanf("%d",&s[i]);

    }

 /*   for(int j = 0;j<DIM;j++){
        printf("%d",s[j]);
        printf("\n");
    }
 */
    return 0;
}
