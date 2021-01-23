#include <stdio.h>

int main(){
    int n;
    int fact = 1;
    int i = 1;
    printf("请输入一个数字进行阶乘计算");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("%d! = %d\n", n, fact);
    return 0;
}