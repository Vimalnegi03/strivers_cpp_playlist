#include<bits/stdc++.h>
using namespace std;
void sum(int x,int i,int total)
{
    if(i>x)
    {
    cout<<total;
    return;
    }
    sum(x,i+1,total+i);
    
    

}
int main()
{
    int x;
    cin>>x;
    sum(x,1,0);
}