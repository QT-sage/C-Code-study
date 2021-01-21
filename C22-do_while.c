#include <stdio.h>

int main(){
    int a = 10;

    do {
        printf("a的值:%d\n", a);
        a++;
    }
    while (a < 20);
    return 0;
}