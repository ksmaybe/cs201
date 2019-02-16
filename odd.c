//
// Created by ksmaybe on 2/11/19.
//
#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

int odd(int x){
    int res=x;
    while(res>=2){
        res--;
        res--;
    }
    return res;
};
int main(){
    char k[100];
    int x;
    printf("Enter something1: ");
    scanf("%[^\n]%*c", k);
    x=(int)strtol(k,(char **)NULL, 10);
//    printf("Enter something2: ");
//    scanf("%[^\n]%*c", d);
    int j=odd(x);

    printf("This is result: \n");
    printf("%d",j);

    return 0;
}