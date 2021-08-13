#include<iostream>
using namespace std;
int main()
{
    int arr[25],i,j,n,sum=0;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    cout<<"Enter the "<<n<<"Elements in the array:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"Total sum of given elements is: "<<sum<<endl;
    return 0;
}