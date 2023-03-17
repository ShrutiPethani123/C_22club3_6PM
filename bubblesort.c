#include<stdio.h>

void main()
{
    int n;
    printf("Enter size for array: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements for array:\n");
    for(int i=0;i<n;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    printf("Array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    // sort

    int swap=0;
    for(int i=0;i<n;i++)
    {
        swap=0;
        printf("\nPass %d: \n",i+1);
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swap=1;
            }
        
            for(int k=0;k<n;k++)
            {
                printf("%d ",a[k]);
            }
            printf("\n");
        }

        if(swap==0)
        {
            break;
        }
    }

    printf("\nArray: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}