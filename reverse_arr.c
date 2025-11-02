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
    printf("The reversed array is : ");
    for(int i=n-1; i>=0;i--)
    {
        printf("%d  ", array[i]);
    }

}
