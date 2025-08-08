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
    int n=x-1;
    int xor1=0,xor2=0;
    for(int i=0;i<n;i++)
    {
        xor2=xor2^v[i];
        xor1=xor1^(i+1);
    }
xor1=xor1^n;
return xor1 ^ xor2;
}