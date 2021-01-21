#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;

    while (b <= 100) {
        a += b;
        b++;
        
    }
    printf("%d\n", a);
    return 0;
}