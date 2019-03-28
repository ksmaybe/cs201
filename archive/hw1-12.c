//
// Created by ksmaybe on 2/5/19.
//

#include <stdio.h>
#include <memory.h>

int main(){
    char c[100];
    printf("Enter something: ");
    scanf("%[^\n]", c);
    printf("print line by line\n");
    for(int i=0;i<strlen(c);i++){
        if (c[i]==' '){printf("\n");}
        else{printf("%c",c[i]);}
    }

    return 0;
}