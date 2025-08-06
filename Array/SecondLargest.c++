#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 2) {
        cout << "Invalid input: Need at least two numbers" << endl;
        return 1;
    }

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int max1 = max(v[0], v[1]);
    int max2 = min(v[0], v[1]);

    for (int i = 2; i < n; i++) {
        if (v[i] > max1) {
            max2 = max1;
            max1 = v[i];
        } else if (v[i] < max1 && v[i] > max2) {
            max2 = v[i];
        }
    }

    if (max1 == max2) {
        cout << "No distinct second largest element." << endl;
    } else {
        cout << max2 << endl;
    }
}
