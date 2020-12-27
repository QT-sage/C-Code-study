#include <stdio.h>

//全局变量
int num2 = 20;
int num3 = 50;

int main(){
    //局部变量
    int num1 = 10;
    //当局部变量与全局变量名字相同，则局部变量优先
    int num2 = 30;
    printf("%d\n", num2);
    printf("%d\n", num3);
    return 0;
}
