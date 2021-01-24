#include <stdio.h>

int main(){
    int number;
    int digit = 0;
    for (number = 1; digit < 50; number++) {
        int formula;
        int standard = 1;
        for (formula = 2; formula < number; formula++) {
            if (number % formula == 0) {
                standard = 0;
                break;
            }
        }
        if (standard == 1) {
            printf("%d\t", number);
            digit++;
            if (digit % 5 == 0) {
                printf("\n");
            }
        }
    }
    return 0;
}