#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char c='A';
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<" ";
        }
       for(int j=0;j<=i;j++)
       {
        cout<<char(c+j);
       }
       for(int j=i-1;j>=0;j--)
       {
        cout<<char(c+j);
       }
       
       cout<<endl;
    }
}