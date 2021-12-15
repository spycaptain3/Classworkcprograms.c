#include<stdio.h>
int main()
{
    int arr[25],i,j,temp,current,n;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    printf("Enter the %d elements in this array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("After Insertion short:\n");
    
    for(i=1;i<n;i++)
    {
        current=arr[i];
        j=i-1;
        
        while(arr[j]>current &&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}