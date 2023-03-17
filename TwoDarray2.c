#include<stdio.h>

void main()
{
    int row,col,row1,col1;
    printf("Enter rows for array1:");
    scanf("%d",&row);
    printf("Enter columns for array1:");
    scanf("%d",&col);

    printf("Enter rows for array2:");
    scanf("%d",&row1);
    printf("Enter columns for array2:");
    scanf("%d",&col1);

    int a[row][col];
    int b[row1][col1];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            printf("b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nArray 1 ...........\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nArray 2...........\n");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    if(row1==row && col1==col)
    {
        int isEqual=1;

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(a[i][j]!=b[i][j])
                {
                    isEqual=0;
                    break;
                }
            }
        }

        if(isEqual==1)
        {
            printf("Array 1 is Equal to Array 2\n");
        }else{
            printf("Array 1 is Not Equal to Array 2\n");
        }


    }else{
        printf("\nNot Equal");
    }

}