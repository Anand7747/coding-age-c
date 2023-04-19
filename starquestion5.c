#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the value of :-");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        
     for (j = 1; j <= n; j++){
        if((i+j)%2 == 0){
        printf("O");
        }
        else {
            printf("E");
          }
        }
        printf("\n");
    }
        
    return 0;
}