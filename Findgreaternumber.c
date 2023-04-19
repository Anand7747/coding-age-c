#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter the numbers a,b and c:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("%d is the largest number", a);
    if (b >= a && b >= c)
        printf("%d is the largest number", b);
    if (c >= b && c >= a)
        printf("%d is the largest number", c);

    return 0;
}