#include<iostream>
using namespace std;
int main()
{
    char name[20];
    cout<<"Enter your name: \n";
    cin.getline(name,15);
    cout<<"\n Name:\n";
    cout.write(name,10);
    cout<<"\n Name: "<<name<<endl;
    return 0;
}