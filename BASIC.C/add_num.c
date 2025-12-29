
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}
int difrence(int a, int b) {
    return a - b;
}
int devide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0; // or handle differently
    }
}
int multi(int a, int b) {
    return a * b;
}

int main() {
    int a, b, sum, diff, mult, dev;
    printf("Enter your numbers: ");
    scanf("%d%d", &a, &b);

    sum = add(a, b);
    diff = difrence(a, b);
    mult = multi(a, b);
    dev = devide(a, b);

    printf("\nResults:\n");
    printf("Addition: %d + %d = %d\n", a, b, sum);
    printf("Difference: %d - %d = %d\n", a, b, diff);
    printf("Multiplication: %d * %d = %d\n", a, b, mult);
    if (b != 0) {
        printf("Division: %d / %d = %d\n", a, b, dev);
    }

    return 0;
}
