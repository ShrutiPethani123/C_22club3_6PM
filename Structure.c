/*
structure:




*/

#include <stdio.h>
#include <stdlib.h>
int i=0;

struct Student
{

    char name[10];
    int age;
    char address[10];
    int id;

} s1;

void displayData(struct Student s[])
{
    for (int j = 0; j < i; j++)
    {
        printf("\n................................Details of Student %d.............................", j + 1);
        printf("\nName: %s", s[j].name);
        printf("\nRoll no: %d", s[j].id);
        printf("\nAddress: %s", s[j].address);
        printf("\nAge: %d", s[j].age);
    }
}

void main()
{
    struct Student s2;

    // printf("\nEnter name: ");
    // scanf("%s",s2.name);
    // printf("Enter roll no: ");
    // scanf("%d",&s2.id);
    // fflush(stdin);
    // printf("Enter address: ");
    // scanf("%s",&s2.address);
    // printf("Enter age: ");
    // scanf("%d",&s2.age);

    // printf("\nName: %s",s2.name);
    // printf("\nRoll no: %d",s2.id);
    // printf("\nAddress: %s",s2.address);
    // printf("\nAge: %d",s2.age);

    // strcpy(s1.name,"ram");
    // printf("Name: %s",s1.name);

    struct Student s[30];

    int choice;

    while (1)
    {
        printf("\n\n0. Exit");
        printf("\n1. Add data");
        printf("\n2. Display data");
        printf("\n3. Search data");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("\n................................Enter details of Student %d.............................", i + 1);
            printf("\nEnter name: ");
            scanf("%s", s[i].name);
            printf("Enter roll no: ");
            scanf("%d", &s[i].id);
            fflush(stdin);
            printf("Enter address: ");
            scanf("%s", &s[i].address);
            printf("Enter age: ");
            scanf("%d", &s[i].age);
            i++;

            break;
        case 2:
            // for (int j = 0; j < i; j++)
            // {
            //     printf("\n................................Details of Student %d.............................", j + 1);
            //     printf("\nName: %s", s[j].name);
            //     printf("\nRoll no: %d", s[j].id);
            //     printf("\nAddress: %s", s[j].address);
            //     printf("\nAge: %d", s[j].age);
            // }

            displayData(s);
            break;
        case 3:
            printf("Enter id: ");
            int eid;
            scanf("%d", &eid);
            int flag = 0;
            for (int j = 0; j < i; j++)
            {
                if (s[j].id == eid)
                {
                    printf("\nName: %s", s[j].name);
                    printf("\nRoll no: %d", s[j].id);
                    printf("\nAddress: %s", s[j].address);
                    printf("\nAge: %d", s[j].age);
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                printf("Not Found!!");
            }

            break;
        default:
            printf("\nInvalid Choice!!!");
        }
    }
}

/*

Make one structure of Employee and Variable of that structure are name , salary , address , id ,age
Make one switch case

0. exit
1. Add data
2. Display data
3. search data



*/