#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i<=n/2)
        {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        }
        else
        {
        for(int j=n/2;j>i;j--)
        {
            cout<<"*";
        }
        }
        cout<<endl;
    }
}