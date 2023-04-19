/*WAP to find the sum of all elements in an integer array using a for loop.*/
#include <stdio.h>
int main()
{
    int a, b[a],i, sum;
    printf("Enter the size of array;-\n");
    scanf("%d",&a);
    printf("Enter the the number:-\n");
    for (i=0; i<a; i++)
    {
        scanf("%d", &b[i]);
        sum = sum+b[i];
    }    
    printf("The sum of above entered number is %d", sum);
    return 0;
}