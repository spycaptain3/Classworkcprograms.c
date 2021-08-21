#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n,d,j,t;
    cout<<"Enter the amount of 1st product: \n";
    cin>>a;
    cout<<"Enter the amount of 2nd product: \n";
    cin>>b;
    c=a+b;
    try
    {
        if(a>=0&&b>=0)
        {
            cout<<"Total amount is: "<<c<<endl;
        }
        else{
            throw(c);
        }
    }
    catch(int num)
    {
        cout<<"You enterd the negative amount for product\n";
        goto end;
    }
    cout<<"Do you want to add more amount then enter 1 otherwise 0: \n";
    cin>>d;
    if(d==1)
    {
        cout<<"Enter the price of 3rd product: \n";
        cin>>j;
        t=c+j;
        try
        {
            if(j>=0)
            {
                cout<<"Total sum of all amount is : "<<t<<endl;
            }
            else{
                throw(t);
            }
        }
        catch(int x)
        {
            cout<<"You have entered negative value for amount\n";
            goto end;
        }
        

    }
    else{
        goto end;
    }

     end:;
     cout<<"Thanks to use me, \n Have a nice Day!\n";
    return 0;
}