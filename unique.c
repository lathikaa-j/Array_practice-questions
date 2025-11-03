#include<stdio.h>
int main()
{
    int n;
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
    printf("\nThe unique elements are: \n");
    for(int i=0; i<n;i++)
    {   
        int c=0;
        for(int j=0; j<n;j++)
        {   if(i!=j)
                if (array[i] == array[j])
                 c+=1;
        }
        if(c==0)
        printf("%d ", array[i]);
    }
}
