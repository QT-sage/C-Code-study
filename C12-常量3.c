#include <stdio.h>

int main(){
    const int AMOUNT = 100;
    // const意思为一旦初始化，就不可以修改,通常const定义的变量采用全部大写的形式，为了突出强调
    int value = 0;
    int change = 0;
    printf("请输入商品价值:");
    scanf("%d", &value);
    change = AMOUNT - value;
    printf("剩余%d元\n", change);
    return 0 ;
}