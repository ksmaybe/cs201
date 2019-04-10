//
// Created by ksmaybe on 4/9/19.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <memory.h>
#define MAXWORDLENGTH 20
#define BUFSIZE 100
char buf[BUFSIZE];
int  bufp = 0;

struct node2d {
    struct node1d *first;
    char *name;
    struct node2d *down;

};

struct node1d {
    struct node1d *next;
    char *name;
};
int getch(void) {
    return (bufp>0) ? buf[--bufp] : getchar();
}
void ungetch(int c) {
    if (bufp >= BUFSIZE)
        printf("ungetch: too many chars\n");
    else
        buf[bufp++] = c;
}
int getword(char *word, int lim) {
    int c, getch(void);
    void ungetch(int);
    char *w = word;
    while (isspace(c = getch())) ;
    if (c != EOF)
        *w++ = c;
    if (!isalpha(c)) {
        *w = '\0';
        return c;
    }
    for ( ; --lim > 0; w++)
        if (!isalnum(*w = getch())) {
            ungetch(*w);
            break;
        }
    *w = '\0';
    return word[0];
}

int main(){
    struct node2d *start;
    struct node2d *last;
    char command[MAXWORDLENGTH];
    char name[MAXWORDLENGTH];
    char afterName[MAXWORDLENGTH];
    while(strcmp(command,"quit")!=0){
        getword(command,MAXWORDLENGTH);
        //insert node2d
        if(strcmp(command,"insert")==0){
            getword(name,MAXWORDLENGTH);
            struct node2d *new;
            struct node2d n;
            new=&n;
            new->name=name;
            new->down=start;
            start=new;
            printf("%s",start->name);
        }
        //append node2d
        else if (strcmp(command,"append")==0){
            getword(name,MAXWORDLENGTH);
            struct node2d *new;
            struct node2d n;
            new=&n;
            new->name=name;
            last=new;
            printf("%s",last->name);
        }
        //append after
        else if (strcmp(command,"appendAfter2d")==0){
            getword(name,MAXWORDLENGTH);
            getword(afterName,MAXWORDLENGTH);
            struct node2d *select;
            select=start;
            while(strcmp(select->name,afterName)!=0){
                select=select->down;
            }
            struct node2d *new;
            struct node2d n;
            new=&n;
            new->name=name;
            new->down=select->down;
            select->down=new;
        }
        printf("\n%s\n",command);
        printf("%d\n",strcmp(command,"quit"));
    }
    return 0;
}
