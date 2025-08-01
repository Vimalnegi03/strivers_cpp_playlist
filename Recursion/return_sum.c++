#include<bits/stdc++.h>
using namespace std;
int sum(int x,int i,int total)
{
    if(i>x)
    {
    return total;
    }
    total=i+sum(x,i+1,total);

}
int main()
{
    int x;
    cin>>x;
   int total=sum(x,1,0);
   cout<<total;
}