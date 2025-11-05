#include<stdio.h>
int linearSearch(int arr[], int N, int k)
{
        for(int i=0;i<N;i++)
        {
            if(arr[i]==k)
                return i;
        }
        return -1;
}

int main()
{
    int N,k;
    int arr[]= {87,9,32,1,24,2,6,9,54,2,8,21};
    printf("Enter the element to find : \n");
    scanf("%d",&k);
    N= sizeof(arr)/sizeof(int);
    int result = linearSearch(arr,N,k);
    if(result==-1)
         printf("The element is not present in the array");
    else 
         printf("The element is found at index %d\n", result);
}
