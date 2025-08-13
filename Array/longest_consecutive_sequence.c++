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
    if(x==0)
    return 0;
    int longest=1;
    unordered_set<int>st;
    for(int i=0;i<v.size();i++)
    {
        st.insert(v[i]);
    }
    for(auto it:st)
    {
        if(st.find(it-1)==st.end())
        {
            int cnt=1;
            int x=it;
            while(st.find(x+1)!=st.end())
            {
                x=x+1;
                cnt=cnt+1;
            }
            longest=max(longest,cnt);
        }
    }
    return longest;
}