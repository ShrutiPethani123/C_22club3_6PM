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

    int isUpper=1;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]!=0 && i>j)
            {
                isUpper=0;
                break;
            }
        }
    }

    if(isUpper==0)
    {
        printf("Not Upper Tringular Matrix!!");
    }else{
        printf("Upper Tringular Matrix!!");
    }

}