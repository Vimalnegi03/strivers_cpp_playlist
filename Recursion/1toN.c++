#include<bits/stdc++.h>
using namespace std;

void count(int n)
{
    if(n==0)
    return;
    count(n-1);
    cout<<n<<" ";
}
int main()
{
    int N;
    cin>>N;
    count(N);
}