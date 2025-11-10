#include <stdio.h>
int main (){
int i;
int n;
int sum = 0;

printf(" ENTR NATURAL NUMBER FOR SUM:");
scanf(" %d", &n);
for ( i = 1; i <= n; i++)
{
    sum = i +sum ;
}
printf(" %d" , sum);





}