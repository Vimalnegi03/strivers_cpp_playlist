#include<bits/stdc++.h>
using namespace std;
 void rotate(vector<vector<int>>& matrix) {
        int x=matrix.size();
        int k=0;
        int l=0;
        vector<vector<int>>ans(x,vector<int>(x));
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=matrix.size()-1;j>=0;j--)
            {
              ans[k][l]=matrix[j][i];
              l++;
              
            }
            l=0;
            k++;
        }
        matrix.erase(matrix.begin(),matrix.end());
        
        for(int i=0;i<ans.size();i++)
        {
            vector<int>sol;
            for(int j=0;j<ans[0].size();j++)
            {
               sol.push_back(ans[i][j]);

    }
    matrix.push_back(sol);
        }
    }

    int main()
    {
        int x;
        cin>>x;
        vector<vector<int>>matrix(x,vector<int>(x));
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<x;j++)
            {
                cin>>matrix[i][j];
            }
        }
        rotate(matrix);

    }