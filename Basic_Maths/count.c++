//Give a number n count number of digits in n

#include<bits/stdc++.h>
using namespace std;

int count(int x)
{
    int digit=0;
    while(x>0)
    {
        int y=x%10;
        digit+=1;
        x=x/10;
    }
    return digit;
}
int short_cut(int x){
    int digit=log10(x) +1;
    return digit;
}
int main(){
    cout<<"Enter your number"<<" ";
    int x;
    cin>>x;
    int digit=count(x);
    cout<<digit<<endl;
    int short_digit=short_cut(x);
    cout<<short_digit;

}