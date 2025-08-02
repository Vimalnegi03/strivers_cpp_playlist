#include<bits/stdc++.h>
using namespace std;


void subsequnces(vector<int>&v,vector<vector<int>>&ans,int i,int x,vector<int>&sup)
{
    if(i==x)
    {
    ans.push_back(sup);
    return;
    }
    //element added
    sup.push_back(v[i]);
    subsequnces(v,ans,i+1,x,sup);
    //element removed from subseqeunce
    sup.pop_back();
    subsequnces(v,ans,i+1,x,sup);

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
    vector<vector<int>>ans;
    vector<int>sup;
    subsequnces(v,ans,0,x,sup);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}