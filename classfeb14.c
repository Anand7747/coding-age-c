#include <stdio.h>
int main()
{
    int marks, totalmarks;
    float percentage;
    printf("enter the marks\n");
    scanf("%d", &marks);
    percentage = (marks * 100) / totalmarks;
    if (percentage == 100)
    {
        printf("just chill bro");
    }
    else if (percentage >= 90)
    {
        printf("try hardwork");
    }
    else
    {
        printf("work very hard");
    }
    return 0;
}