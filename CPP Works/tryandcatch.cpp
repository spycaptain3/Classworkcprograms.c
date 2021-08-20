#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"\n Enter values of a and b: "<<endl;
    cin>>a>>b;
    int x=(a-b);

    try{
        if(x!=0)
        {
            cout<<"Result ="<<(a/(a-b));
        }
        else{
            throw(x);
        }
    }
    
    catch(int i)
    {
        cout<<"\n It is Division by Zero\n";
    }
    return 0;
}