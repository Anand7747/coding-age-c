/*WAP take input from user and print in the form of matrix*/
#include <stdio.h>
int main()
{
    int i, j, m, n;
    int matrix[10][20];
    printf("Enter the rows:-\n");
    scanf("%d",&m);
    printf("Enter the columns:-\n");
    scanf("%d",&n);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter the data in [%d][%d:]",i ,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}