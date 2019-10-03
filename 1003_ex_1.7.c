//
// Created by Administrator on 2019/10/3 0003.
//
#include <stdlib.h>
#include <stdio.h>

/*
 * let n=5 . We have to draw the diagram below
 *      -----
 *     |# # #|
 *     | # # |
 *     |# # #|
 *     | # # |
 *     |# # #|
 *      -----
 */
int main(){
 int n = 5;
 int a = 0;
 //print the upper bound
 while ( a <n ){
     a++;
     printf("-");
 }
 a = 0;
 printf("\n");
    for (int i = 0; i < n+2; ++i) {
        for (int j = 0; j < n ; ++j) {
            if(i%2 == j%2){
              printf("#");
          }else{
              printf(" ");
          }


        }
        printf("\n");
    }

    //print the lower bound
    while (a < n ){
        a++;
        printf("-");
    }
    printf("\n");
}