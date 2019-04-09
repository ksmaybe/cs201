//
// Created by ksmaybe on 2/7/19.
//

#include <stdio.h>
#include <memory.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    int len, max;
    char line[MAXLINE], longest[MAXLINE];
    max = 0;
    while ((len=getLine(line,MAXLINE))>0)
        if (len > max) {
            max = len;
            copy(longest,line);
        }
    if (max>0)
        printf("%s", longest);
    return 0;
}

int getLine(char s[], int lim) {
    int c, i;
    for (i=0; i<lim-1;++i){
        if((c=getchar())!=EOF &&c!='\n'){
            s[i] = c;}
        if (c=='\n') {
            s[i]= c;
            ++i;
            }
        s[i] = '\0';}
    return i;
}

void copy(char to[], char from[]) {
    int i;
    i=0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}