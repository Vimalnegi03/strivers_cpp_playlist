#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int m=x;
    int s=0;
    int count=log10(x)+1;
    while(x>0)
    {
        int y=x%10;
        s=s+int(pow(y,count));
        x=x/10;
    }
    if(s==m)
    cout<<"true";
    else
    cout<<"false";
}