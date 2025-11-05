#include<stdio.h>
int main()
{
    int matrix1[2][2];
    int transpose[2][2];
    printf("Enter the elements of 2 by 2 matrix: \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("The matrix is");
    for(int i=0;i<2;i++)
    {
        printf("\n");
        for(int j=0;j<2;j++)
        {
            printf("%d\t", matrix1[i][j]);
        }
    }
     for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
              transpose[j][i]= matrix1[i][j];  
                
    printf("\nThe transpose of the matrix is ");
    for(int i=0;i<2;i++)
    {
        printf("\n");
        for(int j=0;j<2;j++)
        {
            printf("%d\t", transpose[i][j]);
        }
    }
    
    
    
    
    
    
}
