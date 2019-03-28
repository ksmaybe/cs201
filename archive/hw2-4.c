//
// Created by ksmaybe on 2/7/19.
//


#include <stdio.h>
#include <memory.h>

void squeeze(char s[],char c[]){
    int i;
    char d[100];
    int j;
    for(i=j=0;s[i]!='\0';i++){
          for(int k=0;k<strlen(c);k++){
              int z=0;
              if(s[i]!=c[k]){
                  z++;}
              if(z==strlen(c)){
                  s[j++]=s[i];
              }
    };}
    s[j]='\0';
};

int main(){
    char c[100];
    char d[100];
    printf("Enter something1: ");
    scanf("%[^\n]%*c", c);
    printf("Enter something2: ");
    scanf("%[^\n]%*c", d);
    squeeze(c,d);
    printf("This is squeezed\n");
    printf("%s",c);

    return 0;
}