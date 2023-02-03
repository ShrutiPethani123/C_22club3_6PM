/*

Nested loop - loop inside loop


*/

#include <stdio.h>

void main()
{
    // for (int i = 1; i < 5; i++) // 1 2 3 4 
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("*"); // 0 1 2 3
    //     }
    // }

    // for (int i = 1; i < 5; i++) // 1 2 3 4 
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("%d ",i); // 0 1 2 3
    //     }
    // }

    // for (int i = 1; i < 5; i++) // 1 2 3 4 
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("%d ",j); // 0 1 2 3
    //     }
    // }

    // for (int i = 1; i < 7; i++) // 1 2 3 4 
    // {
    //     for (int j =10; j < 14; j++)
    //     {
    //         printf("%d ",i); // 0 1 2 3
    //     }
    //     printf("\n");
    // }

    // int k=4;
    // for(int i=1;i<=4;i++)
    // {
    //     for(int j=4;j<=8;j++)
    //     {
    //         printf("%d ",k);
    //         k+=2;
    //     }
    //     printf("\n");
    // }

    // int k;
    // for(int i=1;i<=4;i++)
    // {
    //     k=i;
    //     for(int j=1;j<=5;j++)
    //     {
    //         printf("%d ",k);
    //         k=k+i;
           
    //     }
    //     printf("\n");
    // }


    // for(int i=1;i<=4;i++)
    // {
    //     for(int j=1;j<=3;j++)
    //     {
    //         printf("%d %d ",j,i);
    //     }
    //     printf("\n");
    // }

    // int k;
    // for(int i=1;i<=4;i++)
    // {
    //     k=i;
    //     for(int j=1;j<=5;j++)
    //     {
    //         printf("%d ",k);
    //         k=k+5;
           
    //     }
    //     printf("\n");
    // }


    // for(int i=1;i<=5;i++)
    // {
    //     for(int j=1;j<=5;j++)
    //     {
    //         printf("%d ",j%2);
           
    //     }
    //     printf("\n");
    // }

    for(char i='A';i<='E';i++)
    {
        for(char j='A';j<='E';j++)
        {
            printf("%c ",j);          
        }
        printf("\n");
    }
}

/*


1.

5 5 5 5 
6 6 6 6
7 7 7 7

2.

3 4 5 6
3 4 5 6
3 4 5 6
3 4 5 6

3.

9 9 9 9
8 8 8 8
7 7 7 7
6 6 6 6

4.

8 7 6 5
8 7 6 5
8 7 6 5


5. 

1 2 3 4 
5 6 7 8
9 10 11 12
13 14 15 16

6. 

5 7 9 
11 13 15
17 19 21

7.

4 6 8 10 
12 14 16 18
20 22 24 26

8. 

1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20

9.

1 1 2 1 3 1
1 2 2 2 3 2
1 3 2 3 3 3
1 4 2 4 3 4

10.

1 6 11 16 21
2 7 12 17 22
3 8 13 18 23
4 9 14 19 24


11.

1 0 1 0 1 0
1 0 1 0 1 0
1 0 1 0 1 0
1 0 1 0 1 0

12.

A A A A A 
B B B B B
C C C C C
D D D D D


13.

A B C D E
F G H I J
K L M N O
P Q R S T 
U V W X Y

*/