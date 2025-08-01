#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=1;i<=n;i++)
    {
        cout<<s.substr(0,i);
        cout<<endl;
    }
}