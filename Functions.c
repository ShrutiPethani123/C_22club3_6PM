/*

Functions: block of code

types of Function:

1. built in functions
2. User define function
    -> 4 types:
    1. with r.t with arg
    2. without r.t with arg
    3. with r.t without arg
    4. without r.t without arg


syntax:

returnType FunctionName(Argument)
{
        //block of code
}

returnType: int , float , double , char , void


*/

#include <stdio.h>
void msg();
int add(int, int);

int isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int findHCF(int a, int b)
{
    int min = a > b ? b : a;
    int hcf;
    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}

int findLCM(int a, int b)
{
    int max = a > b ? a : b;
    int i = max;
    int count = 0;
    while (1)
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("\n count is %d\n ", count);
            return i;
        }
        i += max;
        count++;
    }
}

void findPrime(int a, int b)
{

    int flag;
    for (int i = a; i <= b; i++)
    {
        flag = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d ", i);
        }
    }
}

int reverse(int n)
{
    int rev=0, rem;
    while(n>0)
    {
        rem = n%10;
        rev = rev*10 + rem;
        n=n/10;
    }
    return rev;

}

void main()
{
    // int a = isPrime(7);
    // if(a==1)
    // {
    //     printf("Prime number!!");

    // }else{
    //     printf("Not Prime!!");
    // }

    // printf("\nHCF: %d",findHCF(12,6));
    // printf("\nHCF: %d",findHCF(5,3));
    // printf("\n LCM: %d",findLCM(100,550));

    // findPrime(5, 50);
    printf("Reverse: %d",reverse(25423));
}

void msg()
{
    printf("Hello...........");
}

int add(int x, int y)
{
    return x + y;
}

/*

1. Take two number from user and perform below operation.

    1. sum
    2. mul
    3. diff
    4. div
    5. mod

2. Take one numberfrom user and check that number is prime or not using function.(int isPrime(int n){})

3. Take one number in decimal and convert into binary.(int dec_to_bin(int c))

4. Take two numers from user and find HCF of that number.(int hcf(int a , int b))

    12 -> 1 2 3  4 6 42
    6 -> 1 2 3 6

    hcf: 6

5.Take two numers from user and find LCM of that number.(int lcm(int a , int b))


    5: 5 10 15 20 25 30 35
    6: 6 12 18 24 30 36

    lcm: 30

6. Take two number from user and print all prime number between that range.

7. Take one number from user and make one function that return reverse number.

8. Take 4 argument in function and then return maximum of them.



*/
