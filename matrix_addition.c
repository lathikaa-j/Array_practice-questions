#include<stdio.h>
int main()
{
    int matrix1[3][3];
    int matrix2[3][3];
    int res[3][3];
    printf("Enter the elements of first 3 by 3 matrix: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of second 3 by 3 matrix: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("The first matrix is");
    for(int i=0;i<3;i++)
    {
        printf("\n");
        for(int j=0;j<3;j++)
        {
            printf("%d ", matrix1[i][j]);
        }
    }
    printf("\nThe second matrix is ");
    for(int i=0;i<3;i++)
    {
        printf("\n");
        for(int j=0;j<3;j++)
        {
            printf("%d ", matrix2[i][j]);
        }
    }
     for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                res[i][j] = matrix1[i][j] + matrix2[i][j];
    printf("\nThe addition of two matrix is ");
    for(int i=0;i<3;i++)
    {
        printf("\n");
        for(int j=0;j<3;j++)
        {
            printf("%d ", res[i][j]);
        }
    }
    
    
    
    
    
    
}
