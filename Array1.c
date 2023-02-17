/*

Array:

-> Collection of similar data
-> all elements have continuos Memory location
-> index start with 0
-> index end with size-1

*/

#include<stdio.h>
#define SIZE 100

void main()
{
    int a[5] = {4 , 8 , 9 ,1 , 6};

    printf("%d\n",a[1]);
    printf("%d\n",a[4]);
    // printf("%d\n",a[6]); - garbage value

    printf("\nArray...\n");

    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

    int marks[5];

    printf("\nEnter the marks\n");

    for(int i=0;i<5;i++)
    {
        printf("marks[%d]:",i);
        scanf("%d",&marks[i]);
    }

    printf("\nArray...\n");

    for(int i=0;i<5;i++)
    {
        printf("%d ",marks[i]);
    }


}

/*

1. Intialize the one array and print that array.
2. Take input from user for array and print that array.
3. Take one array from user and find sum of all element.

    1 5 4 2 3

    sum: 1+5+4+2+3 = 15

4. Take one array from user and find maximum element from array.

    1 2 33 1 45 12 16

    max: 45

5. print all negative numbers from array.

    8 -6 -3 2 5 -4 2 -7
    negative numbers: 4 

6. Take one array from user and print all odd and even number.

    4 2 5 7 2 9 

    odd: 5 7 9
    even: 4 2 2 

7. Take one array from user and store odd element into odd array and even element into even array.

    a[] - 4 2 5 7 2 9 

    odd[]: 5 7 9
    even[]: 4 2 2 


*/