#include <stdio.h>

int main(){
    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(short));
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(long));
    printf("%lu\n", sizeof(long long));
    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(double));

    short int age = 20;
    printf("%d\n", age);
    return 0;
}
