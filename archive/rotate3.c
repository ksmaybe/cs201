//
// Created by ksmaybe on 2/14/19.
//

#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

void rotate3(int *a, int *b,int *c){
    int d=0;
    d=*a;
    *a=*b;
    *b=*c;
    *c=d;
};
int main(){
    int a=1;
    int b=2;
    int c=3;
    printf("A: %d\nB: %d\nC: %d \n",a,b,c);
    rotate3(&a,&b,&c);
    printf("After rotate\n");
    printf("A: %d\nB: %d\nC: %d \n",a,b,c);

    return 0;
}