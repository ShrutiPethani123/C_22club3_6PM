#include<stdio.h>

void main()
{
    int a[5]={1,2,3,4,6};

    int ind;
    printf("Enter the index:");
    scanf("%d",&ind);

    for(int i=ind;i<5;i++)
    {
        a[i]=a[i+1];
    }

    for(int i=0;i<4;i++)
    {
        printf("%d ",a[i]);
    }

}