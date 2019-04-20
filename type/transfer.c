#include<stdio.h>
/*
 * 有符合long向无符号long自动转换，负数变成了正数!
 */
int main(){
    if(-1L>1UL){
        printf("-1L>1UL == true, unexpected -1L to %lu!\n", (unsigned long)-1L);
    }
}
