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
    int k;
    cin>>k;
   k=k%v.size();
        int y=v.size()-k;
        int n=v.size();
        reverse(v.begin(),v.begin()+y);
        reverse(v.begin()+y,v.end());
        reverse(v.begin(),v.end());
        return;
   for(int i=0;i<x;i++)
   {
    cout<<v[i]<<" ";
   }
}