#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of array \n");
    for(int i=0; i<n;i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The array is \n");
    for(int i=0; i<n;i++)
    {
        printf("%d ", array[i]);
    }
    for(int i=0; i<n;i++)
    {
        for(int j=i+1; j<n;j++)
        {
            if (array[i] == array[j])
            {
                c++;
                break;
            }
        }
    }
    printf("The number of duplicate values is %d",c);
}
