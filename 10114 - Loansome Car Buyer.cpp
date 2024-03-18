#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int loanDur;
    while (cin >> loanDur, loanDur >= 0) {
        double downPayment, loan; int deprCount;
        cin >> downPayment >> loan >> deprCount;

        vector<double> depr(loanDur);
        for (int i = 0; i < deprCount; i++) {
            int month;
            cin >> month >> depr[month];
        }

        double carPrice = (loan + downPayment) * (1 - depr[0]);
        double monthlyPayment = loan / loanDur;

        int curMonth = 0;
        double curDepr = depr[0];
        while (loan >= carPrice) {
            curMonth++;
            curDepr = depr[curMonth] ? depr[curMonth] : curDepr;

            loan -= monthlyPayment;
            carPrice *= (1 - curDepr);
        }

        cout << curMonth << ' ' << (curMonth == 1 ? "month" : "months") << '\n';
    }

    return 0;
}
