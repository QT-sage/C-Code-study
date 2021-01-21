#include <stdio.h>

int main(){
    int a = 1;
    int b = 2;
    int c;

    while (b <= 100) {
        c = a + b;
        printf("%d + %d = %d\n", a, b, c);
        a += b;
        b++;
    }
    return 0;
}