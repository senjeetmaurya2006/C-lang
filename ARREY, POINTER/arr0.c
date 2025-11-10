#include <stdio.h>
int main() {
    int marks[4];
   printf("Enter marks of physics :\n");
    scanf("%d", &marks[0]);
   printf("Enter marks of chemistry :\n");
    scanf("%d", &marks[1]);
   printf("Enter marks of mathematics :\n");
    scanf("%d", &marks[2]);
   printf("Enter marks of biology :\n");
    scanf("%d", &marks[3]);
   printf("Marks of physics : %d\n", marks[0]);
   printf("Marks of chemistry : %d\n", marks[1]);
   printf("Marks of mathematics : %d\n", marks[2]);
   printf("Marks of biology : %d\n", marks[3]);
    return 0;
}