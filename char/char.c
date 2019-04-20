#include<stdio.h>
int main(){
    printf("__\b\n");
    char c;
    //printf("%d",EOF);
    while((c=getchar())!=EOF){
        printf("getchar:");
        putchar(c);
        if (c == '\b'){
            printf("\\b");
        }
        printf("\n");
    }

}
