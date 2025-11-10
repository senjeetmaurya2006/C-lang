#include <stdio.h>

int main() {
   int marks[5] = {45, 65, 45, 33, 55}; 
    int i;

    for(i = 0; i < 5; i++) {
        printf("Marks[%d] = %d\n", i, marks[i]);
    }

    return 0;
}