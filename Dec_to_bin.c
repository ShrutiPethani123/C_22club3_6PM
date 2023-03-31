#include<stdio.h>

int decToBin(int n)
{
    int bin=0,rem;
    int i=1;
    while(n!=0) // 6 3 1 0
    {
        rem=n%2; //0 1 1
        n=n/2; // 3 1 0
        bin = bin + rem*i; // 0 + 0*1 = 0   0+ 1*10 = 10  10 + 1*100 =110
        i=i*10; // 10 100 1000

    }

    return bin;

}

void main()
{
    printf("%d ",decToBin(6));

}