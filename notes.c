/*
11. Take Rupees from user and count number of notes.

n = 3789

2000 - 1
1000 - 1
500 - 1
200 - 1
100 - 0
50 - 1
10 - 3
5 - 1
1 - 4

*/

#include<stdio.h>

void main()
{
    int n;
    printf("Enter amount: ");
    scanf("%d",&n);

    int n2000,n1000,n500,n100,n50,n10,n5,n1;

    // if(n>=2000)
    // {
    //     n2000 = n/2000;
    //     n = n- n2000*2000;
    // }

    n2000=n/2000;
    n=n%2000;

    n1000=n/1000;
    n=n%1000;

    n500=n/500;
    n=n%500;

    n100=n/100;
    n=n%100;

    n50=n/50;
    n=n%50;

    n10=n/10;
    n=n%10;

    n1=n;


    printf("\n2000: %d",n2000);
    printf("\n1000: %d",n1000);
    printf("\n500: %d",n500);
    printf("\n100: %d",n100);
    printf("\n50: %d",n50);
    printf("\n10: %d",n10);
    printf("\n1: %d",n1);






}