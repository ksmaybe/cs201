//
// Created by ksmaybe on 3/5/19.
//
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>
#include <ctype.h>
#define BUFSIZE 100
char buf[BUFSIZE];
int  bufp = 0;
int  getch(void);
void ungetch(int);
int getint(int *pn);

void sortInt(int N,int n[N]){
    int x;
    for (int i=0; i<N-1; i++)
        for (int j=i+1; j<N; j++){
            if (n[i] > n[j]) {
                x  = n[j];
                n[j]   = n[i];
                n[i] = x;
            }}
}
int getch(void) {
    return (bufp>0) ? buf[--bufp] : getchar();
}
void ungetch(int c) {
    if (bufp >= BUFSIZE)
        printf("ungetch: too many chars\n");
    else
        buf[bufp++] = c;
}


int getint(int *pn) {
    int c, sign;
    while (isspace(c=getch())) ;
    if (!isdigit(c) && c!=EOF && c!='+' && c!='-') {
        ungetch(c);
        return 0;
    }
    sign = (c=='-') ? -1 : 1;
    if (c=='+' || c=='-')
        c = getch();
    for (*pn = 0; isdigit(c); c=getch())
        *pn = 10 * *pn + (c-'0');
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}
int main () {
    int N;
    getint(&N);
    if(N<50 && N>0){
        int n[N];
        for(int i=0;i<N;i++){
            int x;
            getint(&x);
            n[i]=x;
        }
        printf("Unsorted numbers: \n");
        for(int i=0;i<N;i++){
            printf("%d\n",n[i]);
        }
        sortInt(N,n);
        printf("Sorted numbers: \n");
        for(int i=0;i<N;i++){
            printf("%d\n",n[i]);
        }

    }
    else printf("Invalid N input");

    return 0;}