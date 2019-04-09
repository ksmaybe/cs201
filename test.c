//
// Created by ksmaybe on 4/4/19.
//
#include <stdio.h>
#include <stdlib.h>  // needed by main
#include <string.h>
struct bookType {
    int   ID;
    char  *book;   // the book itself might be huge
    // other large components (reviews, etc)
};

struct bookType *bigID = NULL;

void inspect(struct bookType *b) {
    if (bigID == NULL || b->ID > bigID->ID)
        bigID = b;
    return;
}

char *report(void) {
    return bigID->book;
}

int main (int argc, char *argv[argc]) {
    char a[]="hellolllll";
    char *b="123456789";

    printf("%d\n", (int)sizeof(a));
    printf("%d\n", (int)strlen(b));
//    struct bookType *bk[3];
//    int i;
//    for (i=0; i<3; i++)
//        bk[i] = (struct bookType *) malloc(sizeof(struct bookType));
//    bk[0]->ID = 3;
//    bk[0]->book = "book0";
//    bk[1]->ID = 33;
//    bk[1]->book = "book1";
//    bk[2]->ID = 82;
//    bk[2]->book = "book 2";
//    for (i=0; i<3; i++)
//        inspect(bk[i]);
//    printf ("The book with the biggest ID is \"%s\"\n", report());
    return 0;
}