#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int num1, num2, maxvalue, minvalue;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    maxvalue = max(num1, num2);
    printf("Maimum value between %d and %d is %d\n", num1, num2, max);

    minvalue = min(num1, num2);
    printf("minimum value between %d and %d is %d\n", num1, num2, min);
    return 0;
}
