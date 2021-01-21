// 输入三个数字，判断出那个数字最大
#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    printf("请输入第一个数字a=");
    scanf("%d", &a);
    printf("请输入第一个数字b=");
    scanf("%d", &b);
    printf("请输入第一个数字c=");
    scanf("%d", &c);
    if (a > b) {
        if (a > c) {
            printf("最大值为a=%d\n", a);
        }
        else {
            printf("最大值为c=%d\n", c);
        }
    }
    else {
        if (b > c) {
            printf("最大值为b=%d\n", b);
        }
        else {
            printf("最大值为c=%d\n", c);
        }
    }
    return 0;
}