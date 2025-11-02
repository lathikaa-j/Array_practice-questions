#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of array ");
    for(int i=0; i<n;i++)
    {
        scanf("%d", &array[i]);
        sum = sum+array[i];
    }
    printf("The sum of elements of array is %d ", sum);
}
