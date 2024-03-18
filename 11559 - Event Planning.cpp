#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int personCount, budget, hotelCount, weekCount;
    while (cin >> personCount >> budget >> hotelCount >> weekCount) {
        int minPrice = INT_MAX;
        for (int i = 0; i < hotelCount; i++) {
            int price;
            cin >> price;

            for (int j = 0; j < weekCount; j++) {
                int capacity;
                cin >> capacity;

                if (capacity >= personCount) {
                    minPrice = min(minPrice, price);
                }
            }
        }

        int ans = minPrice * personCount;
        if (minPrice == INT_MAX || ans > budget) {
            cout << "stay home" << '\n';
        } else {
            cout << ans << '\n';
        }
    }

    return 0;
}
