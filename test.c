//
// Created by ksmaybe on 2/5/19.
//

//
// Created by ksmaybe on 2/5/19.
//

#include <stdio.h>
#include <stdlib.h>

int main( )
{
    char c[100];
    FILE *f;
    if((f=fopen("words.txt","r"))==NULL){
        printf("Error! opening file");
        exit(1);
    };
    printf("Enter a value:");
    fscanf(f,"%[^\n]",c);
    printf("%s",c);
    fclose(f);
    return 0;
}
//int main( )
//{
//    char c;
//    FILE *f;
//    f=fopen("words.txt","rt");
//    while((c=fgetc(f))!=EOF){putchar(c);}
//    return 0;
//}

