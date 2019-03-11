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

int any_odd_one(unsigned x){
    unsigned int a=(x&1);
    x=x>>2;
    a=a|(x&1);
    x=x>>2;
    a=a|(x&1);
    x=x>>2;
    a=a|(x&1);
    x=x>>2;
    a=a|(x&1);
    x=x>>2;
    a=a|(x&1);
    x=x>>2;
    a=a|(x&1);
    x=x>>2;
    a=a|(x&1);
    x=x>>2;
    a=a|(x&1);
    x=x>>2;
    a=a|(x&1);
    x=x>>2;
    a=a|(x&1);
    x=x>>2;
    a=a|(x&1);
    x=x>>2;
    a=a|(x&1);
    x=x>>2;
    a=a|(x&1);
    x=x>>2;
    a=a|(x&1);
    x=x>>2;
    a=a|(x&1);
    printf("A: %d",a);
    return a;
}

int main(){
    int b=any_odd_one(6);
    return 0;
}