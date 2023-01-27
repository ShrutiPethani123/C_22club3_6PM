/*

switch -> 

case 
default


*/

#include<stdio.h>

void main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    int a=5;
    int b=3;

    switch(n)
    {
        case 1:
           
        case 2:
            printf("\nTuesday");
        case 3:
            printf("\nWed");
            break;
        case 4:
            printf("Thu");
            break;
        case 5:
            printf("Fri");
            break;
        case 6:
            printf("Sat");
            break;
        case 7:
            printf("Sun");
            break;
        default:
            printf("Invalid Number!!");
        
    }

}

/*

1. Take one number from user and print days according to that month.

    1 - 31 days
    2 - 28/29
    3 - 31 days
    .
    .
    12 - 31 days

2. Make one simple Calculator.

a,b

+ -> Addition
- -> Sub
* -> Mul
/ -> div
% -> Modulus


+
a+b





*/