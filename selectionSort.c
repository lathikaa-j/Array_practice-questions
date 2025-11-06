#include<stdio.h>
void selectionSort(int arr[],int n)
{
    int min;
    for(int i=0;i<n-1;i++)
    {
        min =i;
        for(int j=i+1; j<n;j++)
            if(arr[j]< arr[min])
                min =j;
        int temp = arr[i];
        arr[i]= arr[min];
        arr[min]= temp;
    }
}
int main()
{
    int arr[] = {9,3,1,4,5,6,2}; 
    int n= sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
    printf("The sorted array is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
}
