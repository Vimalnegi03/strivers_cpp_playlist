#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int>&v,int x)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size()-1-i;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
            }
        }
    }
}
int main(){
    int x;
    cin>>x;
    vector<int>v;
    for(int i=0;i<x;i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
    bubble_sort(v,x);
     for(int i=0;i<v.size();i++)
    {
    cout<<v[i]<<" ";
    }
}