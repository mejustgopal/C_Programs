// WAP TO print transpose of a given matrix

#include <stdio.h>
int main()
{
    int A[3][3], i, j, k, temp;
    printf("Enter 9 elements of the matrix : \n");
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            scanf("%d", &A[i][j]);
    for (i = 0, j = 1, k = 1; k <= 3; k++)
    {
        temp = A[i][j];
        A[i][j] = A[j][i];
        A[j][i] = temp;
        if(j-i==1)
            j++;
        else
            i++;         
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }        
    
}
