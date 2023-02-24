/*

8. Take one array from user and search the element.

    a - 8 4 5 12 6 3 

    no: 5 -> present at index 2
    no: 34 -> Not present



*/

#include<stdio.h>

void main()
{
    int a[6],n;

    printf("Enter element for array: \n");
    for(int i=0;i<6;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    printf("\nArray is: \n");
    for(int i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nEnter a no: ");
    scanf("%d",&n);

    int flag=0;

    for(int i=0;i<6;i++)
    {
        if(a[i]==n)
        {
            printf("\nPresent at index %d",i+1);
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("Not Present");
    }


    

    

}