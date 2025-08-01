#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=(n*2+1)-i*2;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}