#include <stdio.h>

void main()
{
    int a[5] = {100, 200, 300, 400, 500};

    printf("\n%d\n", a);
    for (int i = 0; i < 5; i++)
    {
        // printf("%d ", &a[i]);
        printf("%d ", a+i);
    }

    printf("\n%d", *a);
    printf("\n%d", *(a + 1));
    printf("\n%d\n", *(a + 2));

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(a + i));
    }

    *(a + 4) = 30;
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        *(a + i) = *(a + i) + 10;
        printf("%d ", *(a + i));
    }

    printf("%d ", (a + 3));

    int b[4];
    for(int i=0;i<4;i++)
    {
        printf("b[%d]: ",i);
        scanf("%d",b+i);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", *(b+ i));
    }
}