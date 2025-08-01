#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int y;
    cin>>y;
    // for(int i=y;y>=1;i--)
    // {
    //     if(y%i==0&&x%i==0)
    //     {
    //         cout<<i;
    //         break;
    //     }
    // }
    while(x!=1||y!=1)
    {
       if(x%y==0)
       {
        cout<<y;
        break;
       }
       int z=x%y;
       x=y;
       y=z;
    }
}
