#include<bits/stdc++.h>
using namespace std;


int main()
{
    int x;
    cin>>x;
    int z;
    cin>>z;
    vector<int>v;
    vector<int>v1;
    vector<int>ans;
    for(int i=0;i<x;i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
     for(int i=0;i<z;i++)
    {
        int y;
        cin>>y;
        v1.push_back(y);
    }
   int i=0;
   int j=0;
   while(i<x&&j<z)
   {
    if(v[i]<v1[j])
    {
        ans.push_back(v[i]);
        i++;
    }
    else if(v[i]>v1[j])
    {
        ans.push_back(v1[j]);
        j++;
    }
    else
    {
        ans.push_back(v[i]);
        i++;
        j++;
    }

   }
   if(i<x)
   {
    while(i<x)
    {
        if(v[i]!=ans[ans.size()-1])
        {
            ans.push_back(v[i]);

        }
        i++;
    }
   }
   if(j<z)
   {
    while(j<z)
    {
        if(v1[j]!=ans[ans.size()-1])
        {
            ans.push_back(v1[j]);

        }
        j++;
    }
   }
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i]<<" ";
   }
}