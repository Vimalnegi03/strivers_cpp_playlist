#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
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
        sortColors(v);
    }