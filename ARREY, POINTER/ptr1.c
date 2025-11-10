#include <stdio.h>
int main(){
int X = 3;
int *pr = &X;
printf (" print the address of X = %p \n", &X);
printf (" print the address of X using pointer = %p \n", pr);

printf (" print the value of X using pointer = %d \n", *pr);
 printf (" print the value of X directly = %d \n", X);
return 0;

}