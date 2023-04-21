#include<stdio.h>

// void swap(int x , int y)
// {
//     int temp=x;
//     x=y;
//     y=temp;
// }

void swap(int *x , int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void main()
{
    int a=40,b=70;
    printf("Before swap: a=%d b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter swap: a=%d b=%d",a,b);
}