#include<stdio.h>
int linearSearchrec(int arr[], int N, int k)
{
    if(N<0)
        return -1;
    else if(arr[N]==k)
        return N;
    else
        return linearSearchrec(arr,N-1,k);
}

int main()
{
    int N,k;
    int arr[]= {87,9,32,1,24,2,6,9,54,2,8,21};
    printf("Enter the element to find : \n");
    scanf("%d",&k);
    N= sizeof(arr)/sizeof(int);
    int result = linearSearchrec(arr,N-1,k);
    if(result==-1)
         printf("The element is not present in the array");
    else 
         printf("The element is found at index %d\n", result);
}
