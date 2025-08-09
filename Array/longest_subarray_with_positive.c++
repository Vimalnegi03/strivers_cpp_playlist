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
    int right=0;
    int left=0;
    int sum=0;
    int len=0;
    while(right<x)
    {
        right++;
        if(right<x)
        {
            sum+=v[right];
        }
        
    }

}