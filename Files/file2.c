#include<stdio.h>
void main()
{
    FILE *fp;
    char n[100];
    fp = fopen("xyz.txt","r");
    

    if(fp==NULL)
    {
        printf("Can't open file!!!");
    }else{
        while(!feof(fp))
        {
            fscanf(fp,"%s",n);
            printf("%s\n",n);
        }
        
    }

    fclose(fp);

}