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

8. Take one array from user and search the element.

    a - 8 4 5 12 6 3 

    no: 5 -> present at index 2
    no: 34 -> Not present

9. Take one array from user copy array from one array to another.

    a - 5 8 4 1 2
    b - 5 8 4 1 2

10. take two array from user and merge that two array in one single array.

    a - 1 2 5 4 
    b - 7 8 4 5 2 1

    c = 1 2 5 4 7 8 4 5 2 1 

11. Take two array from user and store sum of that two array in another array.

    a - 4 5 7 8
    b - 1 2 3 3

    c - 5 7 10 11

    a - 1 2
    b - 1 5 4
    
    invalid 

12. Give options to user and then perfome task.

    1. Addition
    2. Sub
    3. Mul
    4. div

13. Take one array from user and insert element in array.


    size - 5
    a[size + 1]

    a - 4 5 6 9 1
    ind: 3
    elm: 4

    a - 4 5 6 4 9 1



    1 2 3 4 5

    ind: 2, no: 9

14. Take one array from user and ask one index from user and delete that particular element.

a - 5 7 8 6 2 3
ind:2

a - 5 7 6 2 3


15. Take two shorted array and merge that two array into another array.

a - 1 4 5 8 9
b - 2 3 4 6 7 9 12

c - 1 2 3 4 4 5 6 7 8 9 9 12 
    






*/