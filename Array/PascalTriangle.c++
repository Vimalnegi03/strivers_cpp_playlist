vector<vector<int>> generate(int numRows) {
        vector<int>ans;
        vector<vector<int>>sol;
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<=i;j++)
            {
              if(i==j||j==0)
              {
                ans.push_back(1);  
              }
              else{
                ans.push_back(sol[i-1][j-1]+sol[i-1][j]);
              }
            }
              sol.push_back(ans);
              ans.erase(ans.begin(),ans.end());
        }
        return sol;
    }
