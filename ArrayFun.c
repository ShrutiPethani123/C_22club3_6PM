#include<stdio.h>

int findMax(int n[],int size)
{
    int max=n[0];
    for(int i=1;i<size;i++)
    {
        if(max<n[i])
        {
            max=n[i];
        }
    }
    return max;

}

int countEven(int *n,int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(n[i]%2==0)
        {
            count++;
        }
    }

    return count;
}

int countVowel(char *ch)
{
    int i=0,vowel=0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='a'|| ch[i]=='e'||ch[i]=='o'|| ch[i]=='u'|ch[i]=='i')
        {
            vowel++;
        }
        i++;
    }
    return vowel;
}

void main()
{
    int a[5]={3,40,1,6,76};
    int ans = findMax(a,5);
    printf("Maximum element is: %d",ans);

    // int s = sizeof(ans);
    int s = sizeof(a)/sizeof(a[0]);
    printf("\n%d",s);

    printf("\nEven number: %d",countEven(a,5));

    // Ṭake one string form user and count total number of vowels.

    char ch[]="javaroyal";
    printf("\nCount Variable: %d",countVowel(ch));

}

/*


*/