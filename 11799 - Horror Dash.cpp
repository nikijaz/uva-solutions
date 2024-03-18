#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int studentCount;
        cin >> studentCount;

        int maxSpeed = INT_MIN;
        for (int j = 0; j < studentCount; j++) {
            int speed;
            cin >> speed;

            maxSpeed = max(maxSpeed, speed);
        }

        cout << "Case " << i + 1 << ": " << maxSpeed << '\n';
    }

    return 0;
}
