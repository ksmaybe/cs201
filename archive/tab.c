//
// Created by ksmaybe on 2/26/19.
//

//
// Created by ksmaybe on 2/10/19.
//
#include <stdio.h>
#include <memory.h>
#include <string.h>
#include <ctype.h>

void entab(char s[],char t[]){
    char tab[]="tab";
    int j=0;
    for(int i=0;i<strlen(s);i++){
        switch(s[i]){
            case't':
                if(i+3<=strlen(s)) {
                    int esc1=0;
                    for(int e=0;e<3;e++){
                        if(s[i+e]==tab[e]) {
                            esc1++;
                        }
                    }
                    if (esc1==3){
                        t[j]='\t';
                        i+=3;

                        j+=1;
                    }
                    else{t[j]=s[i];i++;j++;}
                }
            default:
                t[j]=s[i];

                j++;
        }
    }
};
void detab(char s[],char t[]){
    int tab='\t';
    char tabb[]="tab";
    int j=0;
    int z=1;
    for(int i=0;i<strlen(s)+1;i++){
        if(s[i]==EOF){t[j]='\0';}
        int q=0;
        if (toascii(s[i])==32){
            t[j]=tabb[q];
            j+=z;q++;
            t[j]=tabb[q];
            j+=z;q++;
            t[j]=tabb[q];
            j+=z;q=0;i+=3;}
        else if (toascii(s[i])==9){
            t[j]=tabb[q];
            j+=z;q++;
            t[j]=tabb[q];
            j+=z;q++;
            t[j]=tabb[q];
            j+=z;q=0;i+=1;
        }
        else{
                t[j]=s[i];
                j++;
        }}
};



int main (int argc, char *argv[argc]) {
    int c, mode=0;
    if (argc > 2)
        return -argc;   // error return
    if (argc == 2){
        if (strcmp(argv[1], "-en")==0) {
            mode=1;
        }
        else if (strcmp(argv[1], "-de")==0) {
            mode=2;
        }
        else {  // -toupper was arg
            printf("Arg %s illegal.\n", argv[1]);
            return -1;}}
    char d[100];
    char c1[100];

    printf("Enter something: ");
    scanf("%[^\n]%*c", d);
    if(mode==1) entab(d,c1);
    else if(mode==2) detab(d,c1);
    else printf("no function selected");
    printf("%s\n",c1);
//    char d1[]="somethingtabsomething";
//    char c1[100];
//    entab(d1,c1);
//    printf("%s",c1);
//    printf("\n");
//    char d2[]="something    something";
//    char c2[100];
//    detab(d2,c2);
//    printf("%s",c2);

    return 0;}

//int main(){
//    char c[]="wellhellonewlinehhahaha";
//
//    char d[100];
////    printf("Enter something2: ");
////    scanf("%[^\n]%*c", d);
//    printf("%s\n",c);
//
//    escape(c,d);
//    printf("This is escaped:\n");
//    printf("%s",d);
//    char c1[]="wellhello\nhhahaha";
//
//    char d1[25];
////    printf("Enter something2: ");
////    scanf("%[^\n]%*c", d);
//    printf("%s\n",c1);
//
//    unescape(c1,d1);
//    printf("This is unescaped:\n");
//    printf("%s",d1);
//
//    return 0;
//}