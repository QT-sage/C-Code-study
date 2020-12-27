#include <stdio.h>

int main(){
    //extern变量声明，同时也可以进行外部变量声明
    extern int val;
    printf("g_val = %d\n", val);
    return 0;
}
