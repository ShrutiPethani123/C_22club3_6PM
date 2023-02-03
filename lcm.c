/*
11. Find LCM of two number.

    10:10 20 30
    5: 5 10 15 20

    LCM: 10

    6: 6 12 18 24 30 36 42 48 54
    8: 8 16 24 32 40 48
    LCM: 24

*/

#include<stdio.h>

void main()
{
    int a,b,lcm,count=0;

    printf("Enter a no: ");
    scanf("%d%d",&a,&b);

    int max=a>b?a:b;
    int i=max;

    /*
    
    0 - False
    any thing else - True

    */
    while(-7)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
            break;
        }
        i+=max;
        // i++;
        count++;
    }

    printf("\nLcm is: %d",lcm);
    printf("\n%d",count);

    




}