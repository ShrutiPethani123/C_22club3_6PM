#include<stdio.h>
void main()
{
    FILE *fp;
    char n[100];
    char ch;
    fp = fopen("xyz.txt","r");
    

    if(fp==NULL)
    {
        printf("Can't open file!!!");
    }else{
        // while(!feof(fp))
        // {
        //     ch = fgetc(fp);
        //     printf("%c\n",ch);
        // }

        while(!feof(fp))
        {
            fgets(n,110,fp);
            printf("%s",n);
        }
        
        
    }

    fclose(fp);

}