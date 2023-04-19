/*WAF take input from user and add two numbers*/
#include <stdio.h>
int addtwonumber(int a, int b)
{
    return a + b;
}
int main()
{
    int c, d;
    printf("Enter the first number\n");
    scanf("%d", &c);
    printf("Enter the second number\n");
    scanf("%d", &d);
    int e = addtwonumber(c, d);
    printf("%d and %d is equal to %d", c, d, e);
    return 0;
}