#include <stdio.h>

int main(){
    int a;
    printf("请输入数字:");
    scanf("%d", &a);

    if (a < 10) {
        printf("您输入的是一位数字\n");
    }
    else if (a < 99) {
        printf("您输入的是两位数字\n");
    }
    else if (a < 999) {
        printf("您输入的是三位数字\n");
    }
    else {
        printf("输入数字超出判断范围\n");
    }
    return 0;
}