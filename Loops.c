/*

loops:

1. Entry control loops
    1. for
    2. while
2. Exit control loops
    1. do while


-> for

for(init ; condition ; inc/dec)
{
    // block of code
}

-> while

init
while(codition)
{
    inc/dec
}

-> do while
inti
do{

    // inc/dec
}while(con);

*/

#include<stdio.h>

void main()
{
//    for(int i=10;i<=15;i++)
//    {
//         printf("\nHello - %d",i);
//    }

    // int i=10;
    // while(i<15)
    // {
    //     printf("\nHello - %d",i);
    //     i++;
    // }

    // 0 - false
    //  anything else - true
    // while(0)
    // {
    //     printf("\nhello");
    // }

    // for(;;)
    // {
    //     printf("C");
    // }

    // for(int i=1;i>5;i++)
    // {
    //     printf("Java");
    // }

    // for(int i=1,j=5   ;  j>10 , i<5 ;  i++,j--)
    // {
    //     printf("\n%d -  %d",i,j);
    // }

    // print odd number between 10 to 20

    // int k=11;
    // while(k<=20)
    // {
    //     // if(k%2==1)
    //     // {
    //     //     printf("%d ",k);
    //     // }
    //     printf("%d ",k);
    //     // k=k+2;
    //     k+=2;

    // }

    // int n=10;
    // do{
    //     printf("%d ",n++);
    // }while(n<=20);

    int n=6;
    int fact=1;

    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    printf("%d ",fact);



}

/*

1. print 30 to 20 reverse number using while loop.
2. print multiplication table of user given input using do while loop.

    n = 5

    5 * 1 = 5
    5 * 2 = 10
    .
    .
    5 * 10 = 50

3. print sum of user given range numbers.

    a=3
    b=6

    sum = 3 + 4 + 5+6 = 18

4. print factorial of a number.

    4 -> 24(4*3*2*1)

    int fact=1;
    for(int i = 1 ; i<=n;i++)
    {
        fact = fact*i;
    }
    

5. print factor of user given number.

    9- 1 3 9
    12 - 1 2 3 4 6 12

6. check number is perfect number or not ?

    6 - 1 2 3 6 (sum=6) - perfect number

7. Take one number from user and count digit.

    n = 896213
    count: 6

8. Take one number from user and find last and first digit.

    n- 4562

    first digit: 4
    last digit: 2

9. Find sum of digit.

    n-4562
    sum= 17

10. Find gcd(HCF) of two number

    12 : 1 2 3 4 6 12
    6 : 1 2 3 6
    ans- 6


    9:  1 3 9
    12: 1 2 3 4 6 12
    ans: 3

11. Find LCM of two number.

    10: 10 20 30
    5:  5 10

    LCM: 10

    6: 6 12 18 24 30 36 42 48 54
    8: 8 16 24 32 40 48
    LCM: 24


*/