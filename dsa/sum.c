#include <stdio.h>
void main()
{
    int n=2434;

    int c=n;
    int count=0;

    while(c>0)
    {
        c/=10;
        count++;
    }

    int j=count;
    int sum=0;
    while(n>0)
    {
        if(j==count || j==1)
        sum+=(n%10);

        n/=10;
        j--;
    }

    printf("%d",sum);
}