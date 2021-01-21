// 代码仅判断不相同的数字大小，还需完善
#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    int d;

    printf("请输入字母a所对应的数字a=");
    scanf("%d", &a);
    printf("请输入字母b所对应的数字b=");
    scanf("%d", &b);
    printf("请输入字母c所对应的数字c=");
    scanf("%d", &c);
    printf("请输入字母d所对应的数字d=");
    scanf("%d", &d);
    
    if (a > b) {
        if (a > c) {
            if (a > d) {
                printf("最大值为a=%d\n", a);
            }
            else {
                printf("最大值为d=%d\n", d);
            }
        }
        else {
            if (c > d) {
                printf("最大值为c=%d\n", c);
            }
            else {
                printf("最大值为d=%d\n", d);
            }
        }
    }
    else {
        if (b > c) {
            if (b > d) {
                printf("最大值为b=%d\n", b);
            }
            else {
                printf("最大值为d=%d\n", d);
            }
        }
        else {
            if (c > d) {
                printf("最大值为c=%d\n", c);
            }
            else {
                printf("最大值为d=%d\n", d);
            }
        }
    }
}