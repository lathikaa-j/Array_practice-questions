#include<stdio.h>
int main()
{
    int n,min,max;
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
    min = array[0];
    max = array[0];
    for(int i=0; i<n;i++)
    {
        if (array[i]> max)
            max = array[i];
        else if(array[i]< min)
            min = array[i];
    }
    printf("The maximum element in array is %d \n", max);
    printf("The minimum element in array is %d \n", min);
    
    
}
