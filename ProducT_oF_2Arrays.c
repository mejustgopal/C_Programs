//WAP TO CALCULATE PRODUCT OF TWO MATRICES OF ORDER 3X3

#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j, k, sum;
    printf("Enter the elements of first matrix : \n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    printf("Enter the elements of second matrix : \n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            for (k = 0, sum = 0; k < 3; k++)
                sum = sum + a[i][k] * b[j][k];
            c[i][j] = sum;
        }
    for ( i = 0; i < 3; i++)
    {
            for( j = 0; j < 3; j++)
                printf("%d ",c[i][j]);
            printf("\n");
    }

}
