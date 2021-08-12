#include<iostream>
using namespace std;
int main()
{
    int *ptr, arr[30],i,j,n;
    cout<<"Enter the size of the array: \n";
    cin>>n;
    cout<<"Enter the "<<n<<"elements in array:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        ptr=&arr[i];
    }
    ptr=arr;
    cout<<"Elements are:\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"value stored in ptr is: "<<*ptr;
    return 0;
    
}