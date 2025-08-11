   #include<bits/stdc++.h>
   using namespace std;
   
   int majorityElement(vector<int>& nums) {
        
        int ele=nums[0];
        int j=1;
        int count=0;
        for(int i=1;i<nums.size();i++)
        {
            if(ele==nums[i])
            {
                j++;
            }
            else
            {
                j--;
            }
            if(j==0)
            {
                
                j=1;
                ele=nums[i];
            }
        }
        return ele;
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
        int ans=majorityElement(v);
    }