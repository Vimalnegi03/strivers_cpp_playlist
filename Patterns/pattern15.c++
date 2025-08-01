#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=n;i>=0;i--)
    {
        cout<<s.substr(0,i);
        cout<<endl;
    }
}