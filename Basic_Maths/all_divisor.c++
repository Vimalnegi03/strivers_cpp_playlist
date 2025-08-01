#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=1;i<=int(sqrt(x));i++){
           if(x%i==0&&x/i!=i)
           {
              cout<<i<<endl;
              cout<<x/i<<endl;
           }
          else if(x%i==0)
           {
            cout<<i<<endl;
           }
           else
           {
            continue;
           }
    }
}