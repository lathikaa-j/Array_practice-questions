#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of array ");
    for(int i=0; i<n;i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The elements of array is : ");
    for(int i=0; i<n;i++)
    {
        printf("%d  ", array[i]);
    }

}
