#include <stdio.h>
int main () {
int a, b, temp ;


printf(" enter the value of a : ");
scanf("%d", &a);
printf(" enter the value of b: ");
scanf("%d", &b);
temp = a;
a = b;
b = temp;
printf("After swapping: a = %d, b = %d\n", a, b);

return 0;


}