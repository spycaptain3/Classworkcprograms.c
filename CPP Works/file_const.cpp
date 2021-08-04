#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[20];
    float cost;

    ofstream outf("data");
    cout<<"Enter item name: ";
    cin>>name;
    cout<<"Enter item cost: ";
    cin>>cost;
    outf<<name<<"\n";
    outf<<cost<<"\n";
    outf.close();
    ifstream inf ("data");
    inf>>name;
    inf>>cost;
    cout<<"\n item name"<<name;
    cout<<"\n item cost"<<cost;
    inf.close();
    return 0;

}