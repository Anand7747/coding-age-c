/*WAP take input from user in the form of 0 and 1 and sort them*/
#include <stdio.h>
int main()
{
    int n;
    int ocount = 0, zcount = 0;
    printf("Enter the the value:-\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the number:-\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 1)
        {
            ocount = ocount + 1;
        }
        else if (a[i] == 0)
        {
            zcount = zcount + 1;
        }
        else
        {
            printf("invalid input\n");
            n = n + 1;
        }
    }
    for (int i = 1; i <= zcount; i++)
    {
        printf("0");
    }
    for (int i = 1; i <= ocount; i++)
    {
        printf("1");
    }
    return 0;
}