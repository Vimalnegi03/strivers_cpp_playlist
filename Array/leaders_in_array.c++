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
    vector<int>ans;
    int maxi=v[v.size()-1];
    ans.push_back(maxi);
    for(int i=v.size()-2;i>=0;i--)
    {
        if(v[i]>maxi)
        {
            maxi=v[i];
            ans.push_back(v[i]);
        }
    }
    for(int i=0;i<ans.size();i++)
    {
         cout<<ans[i]<<" ";
    }
}