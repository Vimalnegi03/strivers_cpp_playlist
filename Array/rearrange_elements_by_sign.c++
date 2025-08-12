#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
        int k=0;
        int j=1;
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]>0)
           {
            ans[k]=nums[i];
            k+=2;
           }
           else{
            ans[j]=nums[i];
            j+=2;
           }
           
        }
        return ans;
    }

    int main ()
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
        vector<int>ans=rearrangeArray(v);
    }