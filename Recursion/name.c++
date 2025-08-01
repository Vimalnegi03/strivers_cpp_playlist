#include<bits/stdc++.h>
using namespace std;

void name(string me,int count)
{
    if(count==0)
    return;
    cout<<me<<" ";
    name("Vimal",count-1);
}
int main()
{
    name("Vimal",5);
}