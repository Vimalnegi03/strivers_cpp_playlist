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
    cout<<"enter traget sum"<<endl;
    int k;
    cin>>k;
    map<int,int>mp;
    int len=0;
    int curr_sum=0;

    for(int i=0;i<v.size();i++)
    {
        curr_sum+=v[i];
        if(curr_sum==k)
        {
          len=max(len,i+1);
        }
        int rem=curr_sum-k;
        if(mp.find(rem)!=mp.end())
        {
            len=max(len,i-mp[rem]);
        }
        if(mp.find(curr_sum)==mp.end())
        
        mp[curr_sum]=i;
    }

    cout<<len;
}