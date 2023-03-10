#include<stdio.h>

void main()
{
    int n;
    printf("Enter a size: ");
    scanf("%d",&n);
    int a[n+1];

    for(int i=0;i<n;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nArray is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    int idx,ele;

    printf("\nEnter index:  ");
    scanf("%d",&idx);
    printf("Enter element: ");
    scanf("%d",&ele);

    for(int i=n;i>=idx;i--)
    {
        a[i]=a[i-1];//a[5]=a[4]
    }
    a[idx]=ele;
    // n++;
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }

}