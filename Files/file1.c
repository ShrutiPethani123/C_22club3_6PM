/*
Types of file:

1. text file (.txt)
2. binary file (.bin)

Mode:

r - read
w - write
a - append

rb
wb
ab

r+ - read + write
w+ - write + read
a+  - append + read

rb+
wb+
ab+


fopen()
fclose()
fprintf()
fscanf()

fgetc()
fputc()
fgets()
fputs()
fseek()
ftell()

*/

#include<stdio.h>
void main()
{
    FILE *fp;
    char name[10];
    int age;
    fp = fopen("xyz.txt","w");
    printf("Enter name: ");
    scanf("%s",name);
    printf("Enter age: ");
    scanf("%d",&age);

    if(fp==NULL)
    {
        printf("Can't open file!!!");
    }else{
        fprintf(fp,"Data\n");
        fprintf(fp,"%s\t%d\n",name,age);
    }

    fclose(fp);

}