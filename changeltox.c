//
// Created by ksmaybe on 2/16/19.
//
#include <stdio.h>

void changeltox (char s[]) {
    for (int i =0;s[i]!=EOF;i++){
        if(s[i]=='l')s[i]='x';
    }
}
int main(){
    char c[100];

    printf("Enter something: ");
    scanf("%[^\n]%*c", c);


    printf("This is changed:\n");
    changeltox(c);
    printf("%s",c);

    return 0;
}