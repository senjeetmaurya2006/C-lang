#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 4; j++) {
            printf("%d", j);  // Print values of i and j
        }
        printf("\n");  // New line after inner loop
    }
    return 0;
}






