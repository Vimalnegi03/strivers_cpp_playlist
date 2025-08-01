//reverse an array

#include<bits/stdc++.h>
using namespace std;
bool check(string &s,int x,int i)
{
   if(i>x)
   return true;
   if(s[i]!=s[x])
   return false;
   check(s,x-1,i+1);

}
int main()
{
   string s;
   getline(cin,s);
   int x=s.size();
 bool ans= check(s,x-1,0);
 cout<<ans;
}