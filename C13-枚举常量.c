#include <stdio.h>

// 枚举常量=一一列举
enum Sex{
    MAN, 
    WOMAN,
    SECRET

};
int main(){

    enum Sex m = MAN;
    printf("%d\n", m);
    // 所获得的数字就是枚举类型所对应的位置编号
    printf("%d\n", MAN);
    printf("%d\n", WOMAN);
    printf("%d\n", SECRET);
    
    return 0;
}