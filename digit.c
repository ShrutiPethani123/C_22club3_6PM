#include<stdio.h>

void main()
{
    int n,first,last,rem,sum=0;
    printf("Enter a no: ");
    scanf("%d",&n);

    last=n%10;

    // while(n>0)
    // {
    //     rem=n%10;
    //     n=n/10;
    // }

    // while(n>10)
    // {
    //     n=n/10;
    // }

    while(n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }

    printf("\nLast digit: %d",last);
    // printf("\nFirst digit: %d",rem);
    printf("\nFirst digit: %d",n);
    printf("\nSum is: %d",sum);


}