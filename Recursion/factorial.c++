#include<bits/stdc++.h>
using namespace std;

int f(int x,int ans)
{
    if(x==1||x==0)
    {
        return 1;
    }
    return x*f(x-1,ans);
}

int main()
{
    int x;
    cin>>x;
    int ans=f(5,1);
    cout<<ans;
}