/*

7. Take one array from user and store odd element into odd array and even element into even array.

    a[] - 4 2 5 7 2 9 

    odd[]: 5 7 9
    even[]: 4 2 2 


*/

#include<stdio.h>

void main()
{
    int a[6],odd[6],even[6];

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

    int oddindex=0 , evenindex=0;
    for(int i=0;i<6;i++)
    {
        if(a[i]%2==0)
        {
            even[evenindex]=a[i];
            evenindex++;
        }else{
            odd[oddindex]=a[i];
            oddindex++;
        }
    }

    printf("\nOdd Array is: ");
    for(int i=0;i<oddindex;i++)
    {
        printf("%d ",odd[i]);
    }

    printf("\nEven Array is: ");
    for(int i=0;i<evenindex;i++)
    {
        printf("%d ",even[i]);
    }

}