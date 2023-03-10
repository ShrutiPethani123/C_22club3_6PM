/*
15. Take two shorted array and merge that two array into another array.

a - 1 4 5
b - 2 3 4 6 7 9 12

c - 1 2 3 4 4 5 6 7 8 9 9 12 

*/

#include<stdio.h>

void main()
{

    int a1,b1;
    printf("Enter a size for array 1:");
    scanf("%d",&a1);
    printf("Enter b size for array 2:");
    scanf("%d",&b1);

    int a[a1],b[b1];
    int c1=a1+b1;
    int c[c1];
    printf("\nEnter array elements:");
    for(int i=0;i<a1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter array elements:");
    for(int i=0;i<b1;i++)
    {
        scanf("%d",&b[i]);
    }

    printf("\nArray1:\n");
    for(int i=0;i<a1;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nArray2:\n");
    for(int i=0;i<b1;i++)
    {
        printf("%d ",b[i]);
    }

    int aindex=0;
    int bindex=0;
    int cindex=0;

    for(int i=0;i<a1 && i<b1;i++) // 
    {
        if(a[aindex]<b[bindex]) // a[0]<b[0]     
        {
            c[cindex]=a[aindex]; // c[0]=a[0]
            aindex++; //1
            cindex++;//1
        }else{
            c[cindex]=b[bindex]; // c[0]=b[0]
            bindex++; // 1
            cindex++;//1
        }
        
    }

    while(aindex<a1)
    {
        c[cindex++]=a[aindex++];       
    }

    while(bindex<b1)
    {
        c[cindex++]=b[bindex++];       
    }


    printf("\n================================\n");
    for(int i=0;i<c1;i++)
    {
        printf("%d ",c[i]);
    }
}