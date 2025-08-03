#include<bits/stdc++.h>
using namespace std;

void selection(vector<int>&v,int x)
{
    for(int i=0;i<v.size()-1;i++)
    {
        int min=v[i];
        int index=i;
        for(int j=i+1;j<v.size();j++)
        {
           if(v[j]<min)
           {
            min=v[j];
            index=j;
           }
        }
        int temp=min;
        v[index]=v[i];
        v[i]=min;
    }
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
    selection(v,x);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
