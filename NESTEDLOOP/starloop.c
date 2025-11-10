#include <stdio.h>

int main() {
    int i, j, row, column;

    printf("Enter your row: ");
    scanf("%d", &row);

    printf("Enter your column: ");
    scanf("%d", &column);

    for (i = 1; i <= row; i++) {
        for (j = 1; j <= column; j++)
         
        {
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}