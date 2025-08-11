#include<bits/stdc++.h>
using namespace std;

    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])!=mp.end())
            {
                int ele1=mp[nums[i]];
                int ele2=i;
                return {ele1,ele2};
            }
            else
            {
                int rem=target-nums[i];
                mp[rem]=i;
            }
        }
        return {};
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
        int target;
        cin>>target;
        vector<int>sol=twoSum(v,target);
        cout<<v[0]<<" "<<v[1];
    }