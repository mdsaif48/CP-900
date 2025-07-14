#include <bits/stdc++.h>
using namespace std;

// Inline functions replaced with loops inside main for efficiency
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long c = 0;
        bool changed = true;

        
        long long zero_count = count(a.begin(), a.end(), 0);

        while (changed) {
            changed = false;

            for (long long i = 1; i < n; i++) {
                if (a[i] <= a[i - 1]) {
                    if (a[i - 1] == 0) continue; // Can't reduce further
                    a[i - 1] /= 2;
                    c++;
                    changed = true;
                }
            }

            // Recalculate zero count only if changes happened
            if (changed) {
                zero_count = count(a.begin(), a.end(), 0);
            }

            // Stop early if impossible
            if (zero_count > 1) {
                break;
            }
        }

        bool strictly_increasing = true;
        for (long long i = 1; i < n; i++) {
            if (a[i] <= a[i - 1]) {
                strictly_increasing = false;
                break;
            }
        }

        if (!strictly_increasing || zero_count > 1) {
            cout << -1 << "\n";
        } else {
            cout << c << "\n";
        }
    }

    return 0;
}
