/*WAP to find the largest among three numbers using if statements.*/
#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter the number:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b && a>c){
    printf("the largest number between %d , %d and %d is %d\n",a,b,c,a);
    }
   else if (b>a && b>c)
    {
        printf(" the largest number between %d , %d and %d is %d\n", a,b,c,b);
    }
    else{
        printf(" the largest number between %d , %d and %d is %d\n", a,b,c,c);
    }
return 0;
}