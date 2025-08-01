#include<bits/stdc++.h>
using namespace std;

void count(int n)
{
    if(n==0)
    return;
    cout<<n<<" ";
    count(n-1);
}
int main()
{
    int N;
    cin>>N;
    count(N);
}