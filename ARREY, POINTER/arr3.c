#include <stdio.h>

int main() {
    int marks[2][3] = {
        {45, 65, 44},
        {34, 56, 45}
    };

    int i, j;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
} 