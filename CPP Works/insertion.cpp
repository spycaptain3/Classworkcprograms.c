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
    printf("Enter the position of the array:\n");
    scanf("%d",&p);
    printf("Enter the number for Insertion:\n");
    scanf("%d",&num);
    for(i=n-1;i>=p;i--)
    {
        arr[i+1]=arr[i]; 
    }
    arr[p]=num;
    printf("Elements after insertion of %d in the array on the %d position is:\n",num,p);
    for(i=0;i<=n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
