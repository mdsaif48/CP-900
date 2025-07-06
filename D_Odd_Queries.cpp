#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        long long n, q;
        cin >> n >> q;

        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Compute prefix sum
        vector<long long> prefix(n + 1, 0);
        for (long long i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + a[i];
        }

        long long total_sum = prefix[n];  // sum of entire array

        while (q--) {
            long long l, r, k;
            cin >> l >> r >> k;

            
            l--, r--;

            long long sum_l_r = prefix[r + 1] - prefix[l];  // O(1)

            long long new_sum = total_sum - sum_l_r + (r - l + 1) * k;

            if (new_sum % 2 == 0) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        }
    }

    return 0;
}
