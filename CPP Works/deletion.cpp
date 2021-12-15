#include<stdio.h>
int main()
{
    int arr[20],n,i,j,p,num;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    printf("Enter the %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of the array to delete:\n");
    scanf("%d",&p);
    for(i=p-1;i>=0;i--)
    {
        arr[i]=arr[i-1]; 
    }
    printf("Elements after deletion of the %d position is:\n",p);
    for(i=1;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
