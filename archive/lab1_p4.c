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
    if (argc > 10)
        return -argc;   // error return
    if (argc<2){
        printf("Not enough arguments");
        return 0;
    }
    int n[argc-1];
    for(int i=0;i<argc-1;i++){
        n[i]=atoi(argv[i+1]);
    }
    int max=-9*(10^9);
    int min=9*(10^9);
    for(int i=0;i<argc-1;i++){
        if(n[i]>max) max=n[i];
        if(n[i]<min) min=n[i];
    }
    printf("Number of command-line arguments: %d\n",argc-1);
    printf("Largest of command-line arguments: %d\n",max);
    printf("Smallest of command-line arguments: %d\n",min);
    printf("Arguments in reverse\n");

    for(int i=argc-2;i>-1;i--){
        printf("%d\n",n[i]);
    }

    return 0;}