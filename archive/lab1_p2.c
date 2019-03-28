//
// Created by ksmaybe on 3/5/19.
//
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>
#include <ctype.h>

int main () {
    int c=0;
    int digit=0;
    int non=0;
    while((c=getchar())!='\n'){
        if(isdigit(c)){
            c-='0';
            c-=9;
            if(c==0) {c+='0';putchar(c);}
            else{putchar('-');c=-c;putchar(c%10+'0');}
            digit++;
        }else {
            non++;
            putchar(c);
        }
    }
    printf("\n");
    printf("Number of digits: %d\n",digit);
    printf("Number of non-digits: %d\n",non);

    return 0;}