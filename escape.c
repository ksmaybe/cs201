//
// Created by ksmaybe on 2/10/19.
//
#include <stdio.h>
#include <memory.h>
void escape(char s[],char t[]){
    char esc[]="newline";
    char tab[]="tab";
    int j=0;
    for(int i=0;s[i]!=EOF;i++){
        if(s[i]==EOF){t[j]='\0';}
        switch(s[i]){
            case'n':

                if(i+7<=strlen(s)) {
                    int esc1 = 0;
                    for (int e = 0; e < 7; e++) {
                        if (s[i + e] == esc[e]) {
                            esc1++;
                            printf("%d", esc1);
                        }
                    }
                    if (esc1 == 7) {
                        t[j] = '\n';
                        i += 7;
                        j++;
                    }
                    else{t[j]=s[i];j++;}
                }
                else{t[j]=s[i];j++;}
            case't':
                if(i+3<=strlen(s)) {
                    int esc1=0;
                    for(int e=0;e<3;e++){
                        if(s[i+e]==tab[e]) {
                            esc1++;
                        }
                    }
                    if (esc1==3){
                        t[j]='\t';
                        i+=3;
                        j++;
                    }
                    else{t[j]=s[i];j++;}
                }
            default:
                t[j]=s[i];
                j++;
        }
    }
};
void unescape(char s[],char t[]){
    char new='\n';
    char tab='\t';
    int j=0;
    for(int i=0;s[i]!=EOF;i++){
        if(s[i]==EOF){t[j]='\0';}
        switch(s[i]){
            case'\n':
                break;
            case'\t':
                break;
            default:
                break;}}
};

int main(){
    char c[100];
    char d[100];
    printf("Enter something1: ");
    scanf("%[^\n]%*c", c);
//    printf("Enter something2: ");
//    scanf("%[^\n]%*c", d);
    escape(c,d);
    printf("This is escaped\n");
    printf("%s",d);

    return 0;
}