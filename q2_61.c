//
// Created by ksmaybe on 3/9/19.
//

//A.any bit of x equals 1
//B. any bit of x equals 2
//Any bit in the least significant byte of x equals 1
//Any bit in the least significant byte of x equals 0
\


#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>

int get_msb(int x){
    int shift_val=((sizeof(x)-1)<<3);
    int xright=x>>(shift_val);
    printf("ll%d\n",shift_val);
    return xright&0xFF;
}

int q2_61(int x){
    unsigned int a=0,b=0,c=0,d=0;
    unsigned int ax=x,bx=(unsigned int)x;
    int len;
    unsigned int cx=x&15;
    unsigned int dx=(unsigned int)get_msb(x);

    a=(x&&1);
    unsigned int bc=(4294967295^(~bx));
    b=(~bx)&&1;//~((~x)&(~0));
    cx=x-((x>>4)<<4);
    int ex=x;
    c=!(!(255-(x&0xff))&&1);
    d=~dx&1;
    printf("ha %d\n",(255-(x&0xff)));
//        if(ax&1) a=1;
//        ax=ax>>1;
//    }
//    for(int i=0;i<len;i++){
//        if(~bx&1) {b=1;}
//        bx=bx>>1;
//    }
//    for(int i=0;i<4;i++){
//
//        if(cx&1) c=1;
//        cx=cx>>1;
//
//    }
//    for(int i=0;i<4;i++){
//        if(~dx&1) d=1;
//        dx=dx>>1;
//    }
//    a= x&1;
//    b= (x)^1;
//    c= get_msb(x)&1;
//    d=get_msb(x)^1;
    printf("A: %d \nB: %o \nC: %d \nD: %d\n",a,b,c,d);
}

int main(){
    q2_61(511);
    return 0;
}