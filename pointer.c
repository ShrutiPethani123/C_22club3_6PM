/*


pointer: store the address of another variable.

*/

#include<stdio.h>

void main()
{
    int a=50;
    printf("%d",a);
    printf("\n%d",&a);

    // int *p;
    // p=&a;

    int *p=&a;
    printf("\n%d",p);
    printf("\n%d",*p);

    *p=200;
    printf("\n%d",a);

    int **q;
    q=&p;
    printf("\n%d",&p);
    printf("\n%d",q);
    printf("\n%d",*q);
    printf("\n%d",**q);

    **q=100;
    printf("\n%d",a);



}

/*

1. Take two number from user and swap that two  number using function.
2. Take two number from user and make fuction than store addition in one variable and multiplication in one variable.

a: 3
b: 5

a: 8
b: 15

3. Take one array from user and reverse that array using function.

a: 5 3 6 2 1
a: 1 2 6 3 5

void rev(int *a)
{

}

4. Take one string from user and count total number of words using function.

str: India is my Country
word: 4


*/