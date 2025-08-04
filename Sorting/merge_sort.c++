#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int>& v, int low, int mid, int high) {
    vector<int> ans;
    int i = low;
    int j = mid + 1;

    while(i <= mid && j <= high) {
        if(v[i] <= v[j]) {
            ans.push_back(v[i++]);
        } else {
            ans.push_back(v[j++]);
        }
    }
    while(i <= mid) ans.push_back(v[i++]);
    while(j <= high) ans.push_back(v[j++]);

    for(int k = low, idx = 0; k <= high; k++, idx++) {
        v[k] = ans[idx];
    }
}

void MergeSort(vector<int>& v, int low, int high) {
    if(low >= high) return;
    int mid = (low + high) / 2;
    MergeSort(v, low, mid);
    MergeSort(v, mid + 1, high);
    Merge(v, low, mid, high);
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
    MergeSort(v, 0, x - 1);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}