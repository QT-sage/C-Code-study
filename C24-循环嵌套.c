#include <stdio.h>

int main(){
    int a;
    
    for (a = 1; a <= 100; a++) {
        int b;
        int c = 1;
        for (b = 2; b < a; b++) {
            if (a % b == 0) {
                c = 0;
                break;
            }
        }
        if (c == 1) {
            printf("%d是素数\n", a);
        }
    }
    return 0;
}