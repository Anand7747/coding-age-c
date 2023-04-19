#include <stdio.h>
int main()
{
    int i1, i2;
    float f1, f2;
    long l1, l2;
    printf("enter first integer\n");
    scanf("%d", &i1);
    printf("enter second integer\n");
    scanf("%d", &i2);
    printf("enter first float\n");
    scanf("%f", &f1);
    printf("enter second float\n");
    scanf("%f", &f2);
    printf("enter first long\n");
    scanf("%li", &l1);
    printf("enter second long\n");
    scanf("%li", &l2);
    printf("integer\n");
    printf("add of %d and %d is: %d\n", i1, i2, i1 + i2);
    printf("subtract of %d and %d is: %d\n", i1, i2, i1 - i2);
    printf("product of %d and %d  is: %d\n", i1, i2, i1 * i2);
    printf("div of %d and %d is: %d\n", i1, i2, i1 / i2);
    printf("float\n");
    printf("add of %f and %f is: %f\n", f1, f2, f1 + f2);
    printf("subtract of %f and %f is: %f\n", f1, f2, f1 - f2);
    printf("product of %f and %f is: %f\n", f1, f2, f1 * f2);
    printf("div of %f and %f is: %f\n", f1, f2, f1 / f2);
    printf("long\n");
    printf("add of %li and %li is: %li\n", l1, l2, l1 + l2);
    printf("subtract of %li and %li is: %li\n", l1, l2, l1 - l2);
    printf("product of %li and %li is: %li\n", l1, l2, l1 * l2);
    printf("div of %li and %li is: %li\n", l1, l2, l1 / l2);
    return 0;
}