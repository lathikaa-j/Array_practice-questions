#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int array[n];
    int c_array[n];
    printf("Enter the elements of array \n");
    for(int i=0; i<n;i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The first array is \n");
    for(int i=0; i<n;i++)
    {
        printf("%d ", array[i]);
    }
    for(int i=0; i<n;i++)
    {
        c_array[i] = array[i];
    }
    printf("\nThe second array is \n");
    for(int i=0; i<n;i++)
    {
        printf("%d ", c_array[i]);
    }
    
   
}
