//
// Created by ksmaybe on 2/7/19.
//


#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

int htoi(char s[]){
    char *ss=s;
    int hex_to_int;
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')){
        hex_to_int=(int)strtol(ss,NULL,0);
    }
    else{hex_to_int=(int)strtol(ss,NULL,16);}
    return hex_to_int;
};

int main(){
    char c[100];
    printf("Enter something: ");
    scanf("%[^\n]", c);
    int i=htoi(c);
    printf("%d",i);

    return 0;
}