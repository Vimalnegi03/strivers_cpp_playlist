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
    int j=0;
    int count=0;
    for(int i=0;i<x;i++)
    {
        if(v[i]!=0)
        {
            v[j]=v[i];
            j++;
        }
        else{
            count++;
        }
    }
     for(int i=0;i<count;i++)
    {
        v[j]=0;
        j++;

    }
    
}