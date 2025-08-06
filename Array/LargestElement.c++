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
   int maxi=v[0];
   for(int i=1;i<x;i++)
   {
    if(v[i]>maxi)
    {
        maxi=v[i];
    }
   }
 cout<<maxi<<" ";
}