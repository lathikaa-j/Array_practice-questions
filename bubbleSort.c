#include<stdio.h>
void bubbleSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
}
int main()
{
    int arr[]= {4,6,1,9,8,0,3};
    int n = sizeof(arr)/sizeof(int);
    printf("The unsorted array is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    bubbleSort(arr,n);
    printf("The sorted array is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
}
