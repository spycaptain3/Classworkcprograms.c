#include<iostream>
using namespace std;
struct student
{
    int roll;
    char col;
}s1,s2;
int main()
{
    cout<<"Enter the roll of student 1:\n";
    cin>>s1.roll;
    cout<<"Enter the colour of eye of student 1:\n";
    cin>>s1.col;
    cout<<"name is "<<s1.roll;
    cout<<"Colur of eye is "<<s1.col;
    return 0;
}