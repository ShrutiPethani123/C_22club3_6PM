/*

Array:

1D array
multi dimension Array


2D array:

row , col
    0 1 2
0 - 2 4 5
1 - 1 7 8

rows=2
col=3
2*3

row*col

a[row][col]

a[1][2]=8
a[1][0] = 1
a[0][2]=5



*/

#include<stdio.h>
void main()
{
    // // int a[3][2]={{1,4},{3,5},{7,8}};
    // int a[3][2]={1,4,3,5,7,8};

    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<2;j++)
    //     {
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }

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

    int b[row][col];
    int max=a[0][0];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            // if(max<a[i][j])
            // {
            //     max=a[i][j];
            // }
            b[i][j]=a[i][j];
        }
    }

    printf("Maximum number is: %d",max);
}
/*

1. Intialize the array and print that array.
2. Take input from user and print 2D array.
3. Take one array from user and find maximum element in array.

    1 5 7 
    5 8 9
    6 8 4

    max: 9

4. take one array from user and copy one array from another array.

    4 5 6 
    7 8 9

    b - 4 8 6
        7 8 9

5. Take two array from user adn check both arrays are equal or not.

    4 5      4 5
    1 2      1 2

    both equal

    2 3 4     4 5 6 
    1 4 5     2 8 9

    not equal


6. Take one 2D array from user and print primary and secondary diagonal.

    n*n

    4 5 6 9
    1 2 3 6
    7 8 5 6
    1 5 9 7


    PD: 4 2 5 7
    SD: 9 3 8 1

7.Take one 2D array from user and print  sum of primary and secondary diagonal.

    n*n

    4 5 6 9
    1 2 3 6
    7 8 5 6
    1 5 9 7


    PD: 4 2 5 7  - sum:18
    SD: 9 3 8 1 - sum: 21


8. check the matrix is upper tringular matrix or not.

1 2 3
0 2 5
0 0 3

00 01 02
10 11 12
20 21 22

upper Tringular: row>col --> 0


4 5 6 3
0 5 6 3
0 0 2 4
0 0 0 1

9. print sum of lower tringular matrix.

1 0 0
1 2 0
0 3 1

lower tringular: row<col --> 0
sum: 8

10. print transpose of matrix.

1 2 3
4 5 6
1 9 3

1 4 1
2 5 9
3 6 3


-> 5 2 3
   2 9 8(2*3)


5 2
2 9
3 8 (3*2)


00 01 02
10 11 12


00 10
01 11
02 12

11. add transpose of matrix in another array.

1 5 3
8 6 4
A(2*3)


1 8
5 6
3 4
B(3*2)

*/