#include<stdio.h>
int main()
{
    int n, j=0,k=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    int array[n];
    int even[n];
    int odd[n];
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
        if(array[i]%2==0)
        {
            even[j]= array[i];
            j++;
        }
            
        else
        {
             odd[k]= array[i];
             k++;
        }
    }
    printf("\nThe even array is \n");
    for(int i=0; i<j;i++)
    {
        printf("%d ", even[i]);
    }
    printf("\nThe odd array is \n");
    for(int i=0; i<k;i++)
    {
        printf("%d ", odd[i]);
    }
    
}
