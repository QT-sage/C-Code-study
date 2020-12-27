#include <stdio.h>

int main(){
    {
        //不同作用于只能执行自己域内的定义内容
        int num = 1;
        printf("%d\n", num);
    }
    int num = 2;
    printf("%d\n", num);
    return 0;
}
