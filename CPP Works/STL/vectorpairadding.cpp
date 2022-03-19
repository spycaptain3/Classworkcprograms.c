// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<pair<int,int>> veca;
    vector<pair<int,int>>vecb;
    vector<pair<int,int>>vsum;
    
    int n;
    cout<<"Enter the size of the vector:\n";
    cin>>n;
    cout<<"Enter the n pair elements in the vector 1: \n";
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        veca.push_back({x,y});
    }
    cout<<"Enter the n pair elements in the vector 2: \n";
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        vecb.push_back({x,y});
    }
    //cout<<"Elements after adding both: \n";
    for(int i=0;i<n;i++)
    {
        int x,y;
        x=veca[i].first+vecb[i].first;
        y=veca[i].second+vecb[i].second;
        vsum.push_back({x,y});
    }
    cout<<"Elements after adding both: \n";
    for(int i=0;i<n;i++)
    {
        cout<<vsum[i].first<< "  "<<vsum[i].second<<endl;
    }
    return 0;
}
