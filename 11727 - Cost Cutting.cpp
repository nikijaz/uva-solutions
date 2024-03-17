#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(3);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[j];
        }
        sort(a.begin(), a.end());

        cout << "Case " << i + 1 << ": " << a[1] << '\n';
    }

    return 0;
}
