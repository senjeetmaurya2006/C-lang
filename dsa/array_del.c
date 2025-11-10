#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    int ar[10];
    int del;
    printf("Enter the index to be deleted: ");
    scanf("%d", &del);

    for(int i=0;i<10;i++)
    {
        ar[i]=rand()%(10)+1;
        printf("%d ",ar[i]);
    }

    //DELETETION
    printf("\n");

    for(int i=del;i<10;i++)
    {
        ar[i]=ar[i+1];
    }
    ar[9]=0;
    for(int i=0;i<10;i++)
    {
        printf("%d ",ar[i]);
    }
}
