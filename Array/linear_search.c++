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
    int ele;
    cin>>ele;
    for(int i=0;i<v.size();i++)
    {
         if(ele==v[i])
         {
            cout<<"True";
         }
    }
    cout<<"False";
}