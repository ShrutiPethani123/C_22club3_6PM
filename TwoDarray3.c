#include<stdio.h>
void main()
{
    int row,col;
    printf("Enter rows:");
    scanf("%d",&row);
    printf("Enter columns:");
    scanf("%d",&col);

    int a[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nArray...........\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    int sum=0;
    printf("\nPrimary Diagonal: ");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                printf("%d ",a[i][j]);
                sum=sum+a[i][j];
            }
        }
    }
    printf("Sum of PD: is %d ",sum);

    sum=0;
    printf("\nSecondaryDiagonal: ");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==col-j-1)
            {
                sum=sum+a[i][j];
                printf("%d ",a[i][j]);
            }
        }
    }
    printf("Sum of SD: is %d ",sum);
}