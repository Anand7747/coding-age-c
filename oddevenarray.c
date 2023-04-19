#include <stdio.h>
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter your value:-\n");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d\n", a[i] + 2);
        }
        else
        {
            printf("%d\n", a[i] + 1);
        }
    }

    return 0;
}