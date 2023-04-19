#include <stdio.h>
int main()
{
    printf("ARTHEMATIC OPERATOR\n\n");
    int a, b;
    printf("enter first number\n");
    scanf("%d0", &a);
    printf("enter second number\n");
    scanf("%d0", &b);
    printf("addition of %d+%d is:    %d\n", a, b, a + b);
    printf("subtraction of %d-%d is: %d\n", a, b, a - b);
    printf("multiply of %d*%d is:    %d\n", a, b, a * b);
    printf("div  of %d/%d is:        %d\n", a, b, a / b);
    printf("remainder of %d%%%d is:  %d\n", a, b, a % b);
    printf(" when we  add 1 in %d then  value  is %d\n", a, a = +1);
    printf(" when we  subtract 1  in %d then  value  is %d\n", a, a -= 1);
    printf(" when we  multiply by 1  in %d then  value  is %d\n", a, a *= 1);
    printf(" when we  div by 1 in %d then  value  is %d\n", a, a /= 1);

    printf("ASSIGNMENT OPERATORS\n\n");
    int fav, f;
    printf("enter fav no \n");
    scanf("%d", &fav);
    printf("enter fav no is=%d\n",fav);
    f = fav;
    printf("f+= %d\n", f+= fav);
    printf("f-= %d\n", f-= fav);
    printf("f*= %d\n", f*= fav);
    printf("f/= %d\n", f/= fav);

    printf("CONDITIONAL OPERATORS \n\n");
    int c, d;
    
    printf("enter first number\n");
    scanf("%d0", &c);
    printf("enter second number\n");
    scanf("%d0", &d);
    printf("%d<%dis: %d \n", c, d, c < d);
    printf("%d>%dis: %d \n", c, d, c > d);
    printf("%d<=%dis: %d \n", c, d, c <= d);
    printf("%d>=%dis: %d \n", c, d, c >= d);
    printf("%d==%dis: %d \n", c, d, c == d);

    printf("LOGICAL OPERATORS\n");
    int g, h;
    printf("enter first number\n");
    scanf("%d0", &g);
    printf("enter second number\n");
    scanf("%d0", &h);
    if (g % 2 == 0 && h % 2 == 0)
    {
        printf("addition of  two even no  %d and %d is:    %d\n", g, h, g + h);
    }
    else if (g % 2 != 0 && h % 2 != 0)
    {
        printf("subtraction of two odd no  %d and %d is: %d\n", g, h, g - h);
    }
    else if(g % 2 == 0 || h % 2 == 0 &&  g % 2 != 0 && h % 2 != 0)
    {
        printf("multiply of  one odd ana one even no %d and %d is:    %d\n", g, h, g * h);
    }
  
    
   
    return 0;
}