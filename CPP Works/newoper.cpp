#include<iostream>
using namespace std;
int main()
{
    int n,i;
    float *p, total=0;
    cout<<"\n Enter number of subjects\n";
    cin>>n;
    p=new float[n];
    cout<<"\n Enter Marks: ";
    for(i=0;i<n;i++)
    {
        cout<<"\n Subject "<<(i+1)<<endl;
        cin>>p[i];
    }
    cout<<"\n Marks ";
    for(i=0;i<n;i++)
    {
        cout<<"\n Subject "<<(i+1)<<endl;
        cout<<*(p+i);
        total=total+*(p+i);
    }
    cout<<"\n Total= "<<total;
    delete[]p;
    return 0;
}