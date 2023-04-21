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