#include<stdio.h>
void main()
{
    FILE *fp;
    fp = fopen("xyz.txt","r");
    
    if(fp==NULL)
    {
        printf("Can't open file!!!");
    }else{
        printf("\nCurrent position of cursor: %d",ftell(fp));   
        fseek(fp,4,2);
        printf("\nCurrent position of cursor: %d",ftell(fp)); 
        fseek(fp,2,SEEK_CUR);
        printf("\nCurrent position of cursor: %d",ftell(fp)); 
        rewind(fp);
        printf("\nCurrent position of cursor: %d",ftell(fp)); 


    }

    fclose(fp);

}

/*

SEEK_SET -0
SEEK_END - 2
SEEK_CUR - 1


fseek()
ftell()
rewind()

*/