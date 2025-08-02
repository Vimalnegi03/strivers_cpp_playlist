#include<bits/stdc++.h>
using namespace std;


void sum_subsequences(vector<int>&v,int x,int i,vector<vector<int>>&ans,vector<int>&sup,int sum,int current_sum)
{
    if(i==x)
    {
        if(sum==current_sum)
        {
            ans.push_back(sup);
           
        }
        return;
    }
    sup.push_back(v[i]);
    sum_subsequences(v,x,i+1,ans,sup,sum,current_sum+v[i]);
    sup.pop_back();
    sum_subsequences(v,x,i+1,ans,sup,sum,current_sum);
}
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
    cout<<"enter target sum"<<endl;
    int sum;
    cin>>sum;
    vector<vector<int>>ans;
    vector<int>sup;
    sum_subsequences(v,x,0,ans,sup,sum,0);
     for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}