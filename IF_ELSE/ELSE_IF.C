#include <stdio.h>

int main() {
    int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    if (num < 0 || num > 100) {
        printf("You entered a wrong number.\n");
    } 
    else if (num < 33) {
        printf("You are fail.\n");
    } 
    else if (num < 50) {
        printf("You passed by luck.\n");
    } 
    else if (num < 80) {
        printf("You have done well.\n");
    } 
    else {
        printf("You are a hard worker.\n");
    }

    return 0;
}
