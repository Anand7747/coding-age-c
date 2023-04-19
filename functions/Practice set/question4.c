/*WAP to find the roots of a quadratic equation usinf if else statements.*/
#include<stdio.h>
int main()
{
    float a,b,c, disc;
    printf("Enter the number a,b and c:\n");
    scanf("%f %f %f", &a, &b, &c);
    disc = b*b - 4*a*c;
    if(disc >0)
    {
        printf("Roots are real and different\n");
    }
    else if(disc ==0)
    {
        printf("Roots are real and same\n");
    }
    else
    {
        printf("Roots are complex and imaginary\n");
    }
    return 0;
}