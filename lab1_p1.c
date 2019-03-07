//
// Created by ksmaybe on 3/5/19.
//
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char *argv[argc]) {
//    int c, mode=0;
//    int base=10;
//    char *endptr;
    if (argc > 3)
        return -argc;   // error return
    if (argc<3){
        printf("Not enough arguments");
        return 0;
    }
    if (argc == 3){
        int lo=atoi(argv[1]);
        int hi=atoi(argv[2]);
        if (hi<=lo+1){printf("Error 'hi' value too low");return 0;}
        else{
            for(int i=lo+1;i<hi;i++){if(i%2==1){printf("%d,",i);}}
            for(int i=lo+1;i<hi;i++){if(i%2==0){printf("%d,",i);}}
            printf("\n");
        }
    }

    return 0;}