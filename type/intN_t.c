#include <inttypes.h>
#include <stdio.h>
int main(){
    getchar();
    return 0;
}

//intn_t类型打印要使用宏
void printIntN_t(){
    int32_t x = 10;
    uint64_t y = 10;
    printf("x = %" PRId32 ",y=%" PRIu64 "\n", x, y);
}