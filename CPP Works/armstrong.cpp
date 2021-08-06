#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    int x,copy,re,d,f=0;
    cout<<"Enter a number:\n";
    cin>>x;
    copy=x;
    while(copy!=0)
    {
        copy=copy/10;
        d++;
    }
    copy=x;
    while(copy!=0)
    {
        re=copy%10;
        f=f+pow(re,d);
        copy=copy/10;
    }
    if(f==x)
    {
        printf("It is Armstrome number\n");
    }
    else{printf("It is Not an Armstrome number\n");}

}