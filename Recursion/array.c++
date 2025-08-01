//reverse an array

#include<bits/stdc++.h>
using namespace std;
void rev(vector<int>v,int x)
{
     if(x==-1)
     return ;
     cout<<v[x];
     rev(v,x-1);

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
    rev(v,x-1);
}