#include <stdio.h>

int main(){
    double amount = 100;
    // const意思为一旦初始化，就不可以修改,通常const定义的变量采用全部大写的形式，为了突出强调
    double value;
    double change;
    printf("请输入商品价值:");
    scanf("%lf", &value);
    change = amount - value;
    printf("剩余%f元\n", change);
    return 0 ;
}

// 在浮点数中输入对应%lf,而输出则使用%f 