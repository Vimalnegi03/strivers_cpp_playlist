#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    vector<int> row(x, 1);
    vector<int> col(y, 1);
    vector<vector<int>> matrix(x, vector<int>(y)); // ✅ allocate properly

    // Input and mark
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 0) {
                row[i] = 0;
                col[j] = 0;
            }
        }
    }

    // Set zeroes
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (row[i] == 0 || col[j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // Output
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}
