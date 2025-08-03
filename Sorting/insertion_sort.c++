#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int>&v, int x)
{
    for(int i = 1; i < v.size(); i++)
    {
        int key = v[i];
        int j = i - 1;
        // Shift elements greater than key to the right
        while(j >= 0 && v[j] > key)
        {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key; // Place key at correct position
    }
}
 
int main(){
    int x;
    cin>>x;
    vector<int>v;
    for(int i=0;i<x;i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
       insertion_sort(v,x);
     for(int i=0;i<v.size();i++)
    {
    cout<<v[i]<<" ";
    }
}