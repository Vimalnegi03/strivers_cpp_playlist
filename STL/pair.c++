#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>p={1,2};
    cout<<p.first<<" "<<p.second;
    vector<pair<int,int>>a;
    int x,y;
    for(int i=0;i<5;i++)
    {
        cout<<"enter x";
        cin>>x;
        cout<<"enter y";
        cin>>y;
        a.push_back({x,y});
    }
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i].first<<" "<<a[i].second;
        cout<<endl;
    }
}