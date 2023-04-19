#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value:-");
    scanf("%d", &n);
    int a=1;
    for (int i = 0; i < n; i++)
    {
        for ( int j = 0; j < n; j++)
        {
            printf("%d", a);
            a++;
        }
    
    printf("\n");
    }

    return 0;
}