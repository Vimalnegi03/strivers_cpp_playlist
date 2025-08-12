#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int max=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(max<sum)
            {
                max=sum;
            }
            if(sum<0)
            {
             sum=0;
            }
        }
        return max;
    }
int main()
{
   
   int x;
   cin>>x;
   vector<int>v;
   for(int i=0;i<x;i++)
   {
    int y;
    cin>>y;
    v.push_back(y);
   }
   int ans=maxSubArray(v);
   cout<<ans;
}
