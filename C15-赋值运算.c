#include <stdio.h>

int main(){
    int a = 10;
    printf("a++=%d\n", a++);
    printf("a=%d\n", a);
    // 使用a++时，运算结果为下一次出现
    printf("++a=%d\n", ++a);
    printf("a=%d\n", a);
    // 使用++a时，运算结果当时出现

    return 0;
}