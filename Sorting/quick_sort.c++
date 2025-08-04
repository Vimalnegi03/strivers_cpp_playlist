#include <bits/stdc++.h>
using namespace std;

int f(vector<int>& v, int low, int high) {
    int pivot = v[low];
    int i = low + 1;
    int j = high;

    while (true) {
        while (i <= high && v[i] <= pivot) i++;
        while (j >= low && v[j] > pivot) j--;
        if (i < j) {
            swap(v[i], v[j]);
        } else {
            break;
        }
    }
    swap(v[low], v[j]);
    return j;
}

void qs(vector<int>& v, int low, int high) {
    if (low < high) {
        int pi = f(v, low, high);
        qs(v, low, pi - 1);
        qs(v, pi + 1, high);
    }
}

int main() {
    int x;
    cin >> x;
    vector<int> v(x);
    for (int i = 0; i < x; i++) {
        cin >> v[i];
    }
    qs(v, 0, x - 1);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}
