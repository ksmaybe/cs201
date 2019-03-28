//
// Created by ksmaybe on 3/5/19.
//
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char *argv[argc]) {

    if (argc > 2)
        return -argc;   // error return
    if (argc<2){
        printf("Not enough arguments");
        return 0;
    }
    int len=(int)strlen(argv[1]);
    printf("Total number of characters: %d\n",len);
    int vowels=0;
    for(int i=0;i<len;i++){
        switch(argv[1][i]){
            case'a':{vowels++;break;}
            case'e':{vowels++;break;}
            case'i':{vowels++;break;}
            case'o':{vowels++;break;}
            case'u':{vowels++;break;}
            default: break;
        }
    }
    printf("Number of vowels: %d\n",vowels);
    printf("argument unchanged %s\n",argv[1]);
    for(int i=0;i<len;i++){
        switch(argv[1][i]){
            case'a':{argv[1][i]='*';break;}
            case'e':{argv[1][i]='*';break;}
            case'i':{argv[1][i]='*';break;}
            case'o':{argv[1][i]='*';break;}
            case'u':{argv[1][i]='*';break;}
            default:break;
        }
    }
    printf("Argument changed: %s\n",argv[1]);
    return 0;}