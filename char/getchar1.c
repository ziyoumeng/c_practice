#include<stdio.h>
/*
 * EOF值为-1;
 * 回车也是字符;
 */
int main(){
    char c;
    //printf("%d",EOF);
    while((c=getchar())!=EOF){
        printf("getchar:");
        putchar(c);
        printf("\n");
    }
}
