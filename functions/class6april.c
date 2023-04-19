/*WAP to take a input from user and print the fibonacci series*/
#include <stdio.h>
int main()
{
    int n;
    int b = 0, c = 1, d;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("Enter the fibonacci series\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", b);
        d = b + c;
        b = c;
        c = d;
    }

    return 0;
}