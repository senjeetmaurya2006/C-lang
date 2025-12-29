
#include <stdio.h>

int main() {
    int l, b, perimeter, area;

    printf("ENTER YOUR VALUES (length and breadth): ");
    scanf("%d %d", &l, &b);

    area = l * b;
    perimeter = 2 * (l + b);

    printf("AREA = %d, PERIMETER = %d\n", area, perimeter);

    return 0;
}
