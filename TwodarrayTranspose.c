#include<stdio.h>
void main()
{
    int row,col;
    printf("Enter rows:");
    scanf("%d",&row);
    printf("Enter columns:");
    scanf("%d",&col);

    int a[row][col];
    int b[col][row];

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

    printf("\n Transpose Matrix: \n");
    // for(int i=0;i<col;i++)
    // {
    //     for(int j=0;j<row;j++)
    //     {
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            b[j][i]=a[i][j];
        }
    }

    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

}