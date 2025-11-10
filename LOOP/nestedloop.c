#include <stdio.h>

int main() {
    int ROW, COLUMN, i, j;

    printf("ENTER Your ROW VALUE: ");
    scanf("%d", &ROW);
    printf("ENTER Your COLUMN VALUE: ");
    scanf("%d", &COLUMN);

    for (i = 1; i <= ROW; i++) {
        for (j = 1; j <= COLUMN; j++) {
            printf(" HTT BE ");
        }
        printf("\n");
    }

    return 0;
}
