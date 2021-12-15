#include<iostream>
using namespace std;
int main(){
    int tab, i,a;
    cout<<"Enter the value for which you want to write a table "<<endl;
    cin>>a;
    for(i=1;i<=10;)
    {
        cout<<"\n*";
        for(int j=1;j<=10;j++)
        {
            cout<<"   *";
        }
    }
    return 0;
}