// change the value of a veriable using pointer
#include <stdio.h>

int main() {
    int X = 3;
    int *pr = &X;

    printf("Value of X before change: %d\n", X);
    *pr = 5;
    printf("Value of X after change: %d\n", X);

    return 0;
}
