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
    int count=0;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]>v[(i+1)%x])
        {
            count++;
        }
    }
    if(count>1)
    {
        cout<<"false";
    }
    else 
    {
        cout<<"true";
    }
}