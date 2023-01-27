#include<stdio.h>

void main()
{
    int a,b,hcf;

    printf("Enter a no: ");
    scanf("%d%d",&a,&b);

    int min=a>b?b:a;

    for(int i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }

    printf("hcf is: %d",hcf);




}