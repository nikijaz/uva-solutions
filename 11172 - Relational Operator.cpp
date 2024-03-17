#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        switch ((a > b) - (a < b)) {
        case -1:
            cout << '<'; break;
        case 0:
            cout << '='; break;
        case 1:
            cout << '>'; break;
        }
        cout << '\n';
    }

    return 0;
}
