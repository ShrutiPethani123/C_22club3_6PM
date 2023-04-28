#include<stdio.h>

void addMul(int *x , int *y)
{
    int temp=*x;
    *x=*x+*y;
    *y=*y * temp;
}

void main()
{

    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    addMul(&a,&b);
    printf("Value of a and b is %d and %d",a,b);

}