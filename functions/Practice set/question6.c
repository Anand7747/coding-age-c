/*WAP to print the fibonacci series up to a given limit usinf for loop.*/
#include<stdio.h>
int main()
{
    int a, b=0, c=1, d;
    printf("Enter the number:\n");
    scanf("%d",&a);
    printf("The fibonacci seies are:\n");
    for(int i=0; i<a; i++)
    {
        printf("%d\t", b);
        d=b+c;
        b=c;
        c=d;
    }
    return 0;
}