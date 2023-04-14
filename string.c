/*
string: sequence of character


*/

#include<stdio.h>
#include<string.h>

void main()
{
    char ch;
    char name[12]="Joy";
    char address[10]="Ahmedabad";


    printf("%s",name);
    printf("\n%s",address);

    // char college[10];
    // printf("\nEnter college name: ");
    // gets(college);

    // puts(college);

    printf("\n%d",strlen(name));
    // printf("\n%s",strrev(name));
    printf("\n%s",name);
   
    printf("\n%s",strlwr(name));
    printf("\n%s",strupr(name));
    printf("\n%s",strcat(name,address));
    printf("\n%s",strupr(name));

    int i=0;
    while(i<strlen(name))
    {
        printf("%c ",name[i]);
        i++;
    }



}

/*


1. Take one string from user and count total number of user given charaacter.

str -india

ch: i ->2

2. Take one string from user and count total number of vowel and consonant.


*/