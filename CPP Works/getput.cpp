#include<iostream>
using namespace std;
int main()
{
    int count=0;
    char ch;
    cout<<"Input text\n";
    while(ch!='\n')
    {
        cin.get(ch);
        cout.put(ch);
        count++;
    }
    cout<<"Number of characters:"<<(count-1);
    return 0;
}