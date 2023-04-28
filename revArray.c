#include <stdio.h>

void rev(int *a, int n)
{
    // int start=0;
    // int end=n-1;

    // while(start<=end)
    // {
    //     int temp=a[start];
    //     a[start]=a[end];
    //     a[end]=temp;
    //     start++;
    //     end--;
    // }

    for (int i = 0; i <= n / 2; i++)
    {
        int temp = a[n - 1 - i];
        a[n-1-i ]=a[i];
        a[i]=temp;
    }
}

void main()
{

    int a[6] = {1, 6, 2, 7, 3, 8};
    rev(a, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", *(a + i));
    }
}