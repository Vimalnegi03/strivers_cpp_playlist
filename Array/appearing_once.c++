#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    vector<int>v;
    for(int i=0;i<x;i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
    int xr=0;
    for(int i=0;i<x;i++)
    {
        xr=xr^v[i];
    }
    cout<<xr;
}