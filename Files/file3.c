#include<stdio.h>
void main()
{
    FILE *fp;
    char n[100];
    fp = fopen("xyz.txt","a");
    

    if(fp==NULL)
    {
        printf("Can't open file!!!");
    }else{
        printf("Enter any character:");
        char ch;
        scanf("%c",&ch);
        fputc(ch,fp);

        printf("Enter any string:");
        scanf("%s",n);
        fputs(n,fp);


        
    }

    fclose(fp);

}