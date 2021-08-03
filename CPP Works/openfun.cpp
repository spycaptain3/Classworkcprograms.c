#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[20];
    int cost;
    ofstream fout;
    fout.open("data");
    fout<<"Keyboard\n";
    fout<<350<<"\n";
    fout.close();
    ifstream fin;
    fin.open ("data");
    fin>>name;
    fin>>cost;
    cout<<"\nItem name"<<name;
    cout<<"\n item cost:"<<cost;
    fin.close();
    return 0;
}

