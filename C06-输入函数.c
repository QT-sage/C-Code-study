#include <stdio.h>

int main(){
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    // 输入数据使用输入函数
    //& 取地址符号
    printf("请输入第一位数字:");
    scanf("%d", &num1);
    printf("请输入第二位数字:");
    scanf("%d", &num2);

    // scanf("%d%d", &num1, &num2);

    // int sum = 0;
    //C语言规定，变量要定义在当前代码块的最前面
    sum = num1 + num2;
    printf("sum = %d\n", sum);
    return 0;

}
