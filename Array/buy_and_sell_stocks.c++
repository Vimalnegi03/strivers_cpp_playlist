#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        int profit=0;int purchase_price=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            int cost=prices[i]-purchase_price;
            profit=max(profit,cost);
            purchase_price=min(purchase_price,prices[i]);
        }
        return profit;
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
        int ans=maxProfit(v);
        cout<<ans;
    }