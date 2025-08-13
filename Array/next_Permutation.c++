#include<bits/stdc++.h>
using namespace std;

 void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
    }
int main()
{
    int x;
    cin>>x;
    vector<int>v;
    for(int i=0;i<v.size();i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
    nextPermutation(v);
}