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

int rec_binarySearch(int arr[], int low, int high, int k)
{
    if(low<=high)
    {   
        int mid = low+ ((high-low)/2);
        if(k<arr[mid])
            return rec_binarySearch(arr,low, mid-1,k);
        else if(k> arr[mid])
            return rec_binarySearch(arr,mid+1,high,k);
        else 
            return mid;
    }
    return -1; 
}
int main()
{
    int arr[]= {42,97,77,6,1,21,32,8};
    int n = sizeof(arr)/sizeof(int);
    int k= 32;
    printf("The unsorted array is \n");
    for(int i=0;i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    bubbleSortrec(arr, n);
    printf("The sorted array is \n");
    for(int i=0;i<n; i++)
        printf("%d ", arr[i]);
        
    int res = rec_binarySearch(arr,0,n-1,k);  
    if(res==-1)
        printf("\nThe element is not found");
    else 
        printf("\nThe element is found at index %d",res);
        
}
