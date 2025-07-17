#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << " " << 0 << '\n';
            continue;
        }

        long long d = abs(a - b);
        long long rem = a % d;
        long long min_moves = min(rem, d - rem);

        cout << d << " " << min_moves << '\n';
    }

    return 0;
}
