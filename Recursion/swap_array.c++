//reverse an array

#include<bits/stdc++.h>
using namespace std;
void rev(vector<int>&v,int x,int i)
{
    if(i>x)
    return;
    swap(v[i],v[x]);
    rev(v,x-1,i+1);
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
    rev(v,4,0);
   for(int i=0;i<x;i++)
   {
    cout<<v[i]<<" ";
   }
}