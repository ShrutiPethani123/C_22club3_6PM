#include<stdio.h>

int countWord(char *ch)
{
    int i=0;
    int word=1;
    while(ch[i]!='\0')
    {
        if(ch[i]==' ' || ch[i]=='\n' || ch[i]=='\t')
        {
            word++;
        }
        i++;
    }

    return word;
}

void main()
{
    char str[100];
    printf("Enter string: ");
    // scanf("%s",str);
    gets(str);
    printf("Total number of words: %d",countWord(str));

}