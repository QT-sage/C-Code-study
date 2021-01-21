#include <stdio.h>

int main(){
    int a;
    printf("请选择需要办理的业务:\n");
    printf("存钱请按1:\n");
    printf("取钱请按2:\n");
    printf("基金请按3:\n");
    printf("其他请按4:\n");
    scanf("%d", &a);

    switch (a) {
        // switch必须为int类型的语句，不可以为double类型
        case 1:
            printf("你没钱\n");
            break;
        case 2:
            printf("你的账户余额为:0.00\n");
            break;
        case 3:
            printf("你不适合买基金\n");
            break;
        case 4:
            printf("滚\n");
            break;
        default:
            printf("请输入正确的编号\n");
            break;
    }
    return 0;
}