/*WAP to determine if a given number is positive, negative or zero*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:-\n");
    scanf("%d", &a);
    if (a>0)
    {
        printf("The given number is positive\n");
    }
   else if (a<0)
    {
        printf("The given number is negative\n");
    }
    else
    {
        printf("The given number is zero\n");
    }

    return 0;
}