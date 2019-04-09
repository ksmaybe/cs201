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

int main(){
    long a=1;
    long b=2;
    long c=3;
    swap2(&a,&b,&c);
    printf("a: %ld b: %ld c: %ld",a,b,c);
    return 0;

}