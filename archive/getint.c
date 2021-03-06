//
// Created by ksmaybe on 2/14/19.
//

#include <stdio.h>
#include <ctype.h>
#define BUFSIZE 100
char buf[BUFSIZE];
int  bufp = 0;
int  getch(void);
void ungetch(int);
int getint(int *pn);
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
    printf("Enter a number: ");
    while (isspace(c=getch())) ;
    if (!isdigit(c) && c!=EOF && c!='+' && c!='-') {
        ungetch(c);
        return 0;
    }
    sign = (c=='-') ? -1 : 1;

    //printf("sign: %d\n",sign);
    //printf("0: %d\n",*pn);
    if (c=='+' || c=='-'){
        c = getch();}
    for (*pn = 0; isdigit(c); c=getch())
        *pn = 10 * *pn + (c-'0');

    //printf("1: %d\n",*pn);
    if (c=='+' || c=='-'){
        *pn= *pn*10;
        c = getch();}
    //printf("2:  %d\n",*pn);

    *pn *= sign;
    if (c != EOF)
        ungetch(c);

    //printf("3: %d\n",*pn);
    return *pn;
}

int main(){
    int c;
    getint(&c);

    printf("Number: %d",c);
    return 0;
}