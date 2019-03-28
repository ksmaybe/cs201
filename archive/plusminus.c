//
// Created by ksmaybe on 2/14/19.
//


#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

void rotate3(int *a, int *b){
    int plus=0;
    int minus=0;
    plus=*a+*b;
    minus=*a-*b;
    *a=plus;
    *b=minus;
    };
int main(){
    int x=1;
    int y=2;
    printf("A: %d\nB: %d\n",x,y);

    rotate3(&x,&y);
    printf("plus minus\n");
    printf("A: %d\nB: %d\n",x,y);

    return 0;
}