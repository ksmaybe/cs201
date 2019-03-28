//
// Created by ksmaybe on 3/9/19.
//
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <pwd.h>
#include <stdint.h>

int is_little_endian(char *start, int len){
    int littleEndian;
    if(*(start)==0x31){
        printf("little endian\n");
        littleEndian=1;
    }
    else {littleEndian=0;
    printf("big endian \n");}
    return littleEndian;
};
int main(){
    int a=54321;
    int b=is_little_endian((char *)&a, sizeof(int));
    printf("%d",b);
}