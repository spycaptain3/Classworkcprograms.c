#include<iostream>
using namespace std;
int main()
{
    int arr[25],i,j,temp,current,n;
    cout<<"Enter the size of the array: \n";
    cin>>n;
    cout<<"Enter the "<<n<<" elements in this array:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"After Insertion short:\n";
    
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
        cout<<arr[i]<<"\t";
    }
    return 0;
}