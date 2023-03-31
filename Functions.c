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


#include<stdio.h>
void msg();
int add(int ,int );

int isPrime(int n)
{
       for(int i=2;i<n;i++)
       {
            if(n%i==0)
            {
                return 0;
            }
       }

    return 1;
}

int findHCF(int a, int b)
{
    int min = a>b?b:a;
    int hcf;
    for(int i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }

    }
    return hcf;
}

void main()
{
    int a = isPrime(7);
    if(a==1)
    {
        printf("Prime number!!");

    }else{
        printf("Not Prime!!");
    }


    printf("\nHCF: %d",findHCF(12,6));
    printf("\nHCF: %d",findHCF(5,3));
}

void msg()
{
    printf("Hello...........");
}


int add(int x , int y)
{
    return x+y;
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
    

*/


