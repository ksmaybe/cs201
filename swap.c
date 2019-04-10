//
// Created by ksmaybe on 3/28/19.
//

#include <stdio.h>

void swap3(long *xp, long *yp, long *zp){
    long t= *xp;
    *xp = *yp;
    *yp=*zp;
    *zp=t;
}
void swap2(long *xp, long *yp,  long *zp){
    //%rdi, %rsi, %rdx contain xp, yp, zp, respectively.
    asm("movq (%rdi),%rax;"
        "movq (%rsi),%rbx;"
        "movq %rbx,(%rdi);"
        "movq (%rdx),%rbx;"
        "movq %rbx,(%rsi);"
        "movq %rax,(%rdx);"
    );
};
//asm swap ();

int main(int argc, char *argv[]){
    char c;
    while((c=*(++argv[1]))!='\0')
        printf("%c",c);
    return 0;

}