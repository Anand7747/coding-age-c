/*WAP to take a number and return 0 if it's prime, return 1 if it's even and 2 if it's odd and if some number is both even and prime then give priority acoording to alphabet. */
/*Take 10 user input and use above function and print the sum of outputs for all numbers.*/
#include <stdio.h>
int num(int);
int main()
{
    int sum = 0;
    int a;
    for(int i = 1; i <=10; i++)
    {
        scanf("%d", &a);
        num(a);
        printf("%d\n", num(a));
        sum = sum+ num(a);
    }
    printf("Sum of even and odd is:-\n%d", sum);
    return 0;
}
int num(int s)
{
    if(s % 2 == 0)
    {
        return 1;
    }
    else if (s % 2!= 0)
    {
        return 2;
    }
    else{
        int count=0;
        for(int i=2; i<s; i++)
        {
            if(s%i==0){
                count++;
            }
            if (count==0){
                return 0;
            }
        }
    }
        
}

