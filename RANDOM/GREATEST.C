#include<stdio.h>
int main(){
int a,b,c;
printf("ENTER THRE NUM :");
scanf("%d%d%d",&a,&b,&c);
if (a>b && b>c)

   printf("%d is GRETEST ",a);

else if(b>c)
    printf("%d is gretest",b);

 else 
 printf("%d IS GRETEST",c);

}