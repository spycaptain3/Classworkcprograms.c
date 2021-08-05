#include<iostream>
using namespace std;
int main()
{
    int n,j,i,k,ans;
    cout<<"Enter a number to check it is prime or not: \n";
    cin>>n;
    cout<<"Result is :\n";
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"It is not prime\n";
            goto end;

        }
    }
    cout<<"It is prime.\n";
    end:;
    return 0;
}