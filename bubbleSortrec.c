#include<stdio.h>
void bubbleSortrec(int arr[], int n)
{
    if(n==1)
        return;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp = arr[i];
            arr[i]= arr[i+1];
            arr[i+1]= temp;
        }
    }
    return bubbleSortrec(arr, n-1);
}
int main()
{
    int arr[]= {4,8,7,6,1,7,3,8};
    int n = sizeof(arr)/sizeof(int);
    printf("The unsorted array is \n");
    for(int i=0;i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    bubbleSortrec(arr, n);
    printf("The sorted array is \n");
    for(int i=0;i<n; i++)
        printf("%d ", arr[i]);
}
