#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int s=0;
  while(x>0)
  {
    int y=x%10;
    if(y==0)
    {
        x=x/10;
        continue;
    }
    else
    {
     s=(s*10)+y;
     x=x/10;
    }

  }
  cout<<s;
}