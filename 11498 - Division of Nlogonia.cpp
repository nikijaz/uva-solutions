#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while (cin >> n, n != 0) {
        int x0, y0;
        cin >> x0 >> y0;

        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;

            if (x == x0 || y == y0) {
                cout << "divisa" << '\n';
                continue;
            }

            if (y > y0) {
                cout << 'N';
            } else {
                cout << 'S';
            }
            if (x > x0) {
                cout << 'E';
            } else {
                cout << 'O';
            }
            cout << '\n';
        }
    }

    return 0;
}
