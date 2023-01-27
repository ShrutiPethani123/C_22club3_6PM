/*

-> conditional statment
    1. if else
    2. switch
    3. loop

-> If else

1. simple if
2. if else
3. nested if
4. else if ladder

*/


#include<stdio.h>

void main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);

    if(n>0)
    {
        if(n>10)
        {
            printf("%d is Positive and greater than 10",n);
        }else{
            printf("%d is Positive and less than or equal 10",n);
        }
        
    }
    else if(n==0)
    {
        printf("%d is Zero",n);
    }
    else{
        printf("%d is Negative",n);
    }
}

/*

1. Take  Two  number from user and print minimum number.
2. Take Three number from user and print Maximum number from 3.
3. Take one number from user and check number is divisible by 7 or not.
4. Take one number from user and check it is divisible by 3 and 11 or not.

    33 -> divisible by both
    12 -> not divisible

5. take one character from user and print it is vowel or consonant.

    vowel - a e i o u A E I O U

6. Take one character and check character is number(0-9) , alphabet or special character.

    3 -> number
    r -> alphabet
    & , $ -> special character

7. take one number from user and print number is even or odd.

8. take cost price and selling price from user and print profit or loss and how much ?

    cp - 100
    sp - 200

    profit - 100 rs

9. Take one number from user and print according week days.

    1 - sunday
    2 - Monday
    .
    .
    7 - Satuarday

10. Take one number and print month days according to number.

    1 - 31 days
    2 - 28/29 days
    3 - 30 days
    .
    .
    12 - 31 days

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

12. Write a program to take input from user in seconds and convert into hours and minutes.

	10000 - 2 : 46 : 40

13. Write a program to input electricity unit charge and calculate the total 
	electricity bill according to the given condition:

	For first 50 units Rs. 0.50/unit
	For next 100 units Rs. 0.75/unit
	For next 100 units Rs. 1.20/unit
	For unit above 250 Rs. 1.50/unit

	300 

	50 - 0.50 = 25
	100 - 0.75= 75
	100 - 1.20 = 120
	50 - 1.50  = 75   
    total - 295


    130

    50 - 0.50 =25
    80 - 0.75 = 60 

    total bill = 85

    30

    30 * 0.50 = 15 







*/