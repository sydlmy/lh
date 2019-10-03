//
// Created by Administrator on 2019/10/3 0003.
//
/*
 * we have an array {0,15,5,10,25,0,0,5,15,0}
 * -eliminates all the elements which is zero
 * -shift all the other elements to the right
 * -print the meaningful element
 */
#include <stdlib.h>
#include <stdio.h>

int main(){
    int DTM = 10; //set the dimension of the array
    int n = DTM;
    int a[10] = {0,15,5,10,25,0,10,5,15,10};
   // for(int i =0;i < DTM;i++){
    //    printf("please enter the array:");
   //     scanf("%d\n",&a[i]);
  //  }
    for(int i =0;i < DTM;i++){
        if(a[i] == 0 ){
            a[i] = a[i+1];
            n = n -1;
        }else{
            i = i+1;
        }
    }
    for(int i =0;i < n;i++){
        printf("%d",a[i]);
        printf(" ");
    }
}