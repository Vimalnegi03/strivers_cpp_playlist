#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    int m=x;
    int s=0;
    while(x>0)
    {
        int y=x%10;
        s=(s*10)+y;
        x=x/10;
    }
    if(s==m)
    cout<<"True";
    cout<<"false";
}