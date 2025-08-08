#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    vector<int>v;

    for(int i =0;i<x;i++)
    {
           int y;
           cin>>y;
           v.push_back(y);
    }

    int curr_count=0;int max_count=0;
    for(int i=0;i<x;i++)
    {
        if(v[i]==1)
        {
            curr_count++;
        }
        else{
            max_count=max(curr_count,max_count);
            curr_count=0;
        }
    }
    cout<<max_count;
}