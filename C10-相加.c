#define _CRT_SECURE_NO_WARNINGS 1
// 代码意义为屏蔽警告，由于C语言产生的部分函数不支持而产生的警告所造成

#include <stdio.h>

int main(){
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    // scanf("%d%d", &num1, &num2);
    printf("请输入第一个数字：");
    scanf("%d", &num1);
    printf("请输入第二个数字:");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("相加结果为： %d\n", sum);

    return 0;
}