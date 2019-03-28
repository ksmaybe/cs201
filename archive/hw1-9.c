//
// Created by ksmaybe on 2/5/19.
//

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main( ) {
    char c[100];
    printf("Enter something: ");
    scanf("%[^\n]", c);
    printf("Extra space removed: ");
    for (int i =0;i<strlen(c);i++){
        if(c[i]==' '){
            if (c[i+1]==' '){}
            else{
                printf("%c",c[i]);
            }

        }else{printf("%c",c[i]);}
    }
    return 0;

}