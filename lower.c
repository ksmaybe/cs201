//
// Created by ksmaybe on 3/7/19.
//
//7.1. Write a program that converts upper case to lower or lower case to upper,
// depending on the name it is invoked with, as found in argv[0]
#include <stdio.h>
#include <ctype.h>

int main(int argc,char *argv[argc]){
    int c;
    printf("%s\n",argv[0]);
    printf("%d\n",argc);
    while((c=getchar())!='\n'){
        if(isupper(c)){
            putchar(tolower(c));
        }else {
            putchar(c);
        }
    }
    return 0;
}