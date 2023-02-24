/*

10. take two array from user and merge that two array in one single array.

    a - 1 2 5 4 
    b - 7 8 4 5 2 1

    c = 1 2 5 4 7 8 4 5 2 1 

*/

#include<stdio.h>


void main()
{
    int a[10],b[10],c[20];

    int a1,b1;
    printf("Enter a size of array1: ");
    scanf("%d",&a1);
    printf("Enter a size of array2: ");
    scanf("%d",&b1);

    // int c1=a1+b1;
    

    printf("\nEnter element for array 1:\n");
    for(int i=0;i<a1;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }

    printf("\nEnter element for array 2:\n");
    for(int i=0;i<b1;i++)
    {
        printf("b[%d]:",i);
        scanf("%d",&b[i]);
    }

    printf("\nArray 1:  ");
    for(int i=0;i<a1;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\nArray 2:  ");
    for(int i=0;i<b1;i++)
    {
       printf("%d ",b[i]);
    }

    // for(int i=0;i<a1;i++)
    // {
    //     c[i]=a[i];
    // }

    // for(int i=0;i<b1;i++)
    // {
    //     c[i+a1] = b[i];
    // }

    int c1=0;

    for(int i=0;i<a1;i++)
    {
        c[c1]=a[i];
        c1++;
    }

    for(int i=0;i<b1;i++)
    {
        c[c1++]=b[i];
        
    }

    printf("\nMerge Array:  ");
    for(int i=0;i<c1;i++)
    {
       printf("%d ",c[i]);
    }


}