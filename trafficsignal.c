#include <stdio.h>
int main()
{
    char button;
    printf("enter the traffic button\n");
    scanf("%c", &button);
    switch (button)
    {
    case 'R':
    case 'r':
        printf("Stop");
        break;
    case 'Y':
    case 'y':
        printf("Wait");
        break;
    case 'G':
    case 'g':
        printf("Go");
        break;
    default:
        printf("invalid input");
    }

    return 0;
}