#include <stdio.h>
int main() {
    int n = 999;
    
    int last = n%10;
    int first;
    while (n>=20)
    {
        n= n/10;
    }
    int sum = n + last;
    printf("%d",sum);
          
    return 0;
}