#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        long long c = 0;
        bool valid = true;

        if (n == 1) {
            cout << 0 << '\n';
            continue;
        }

        while (n != 1) {
            if (n % 6 == 0) {
                n /= 6;
                c++;
            } else if (n % 3 == 0) {
                n *= 2;
                c++;
            } else {
                valid = false;
                break;
            }
        }

       
        valid ? cout << c << '\n' : cout << -1 << '\n';
    }

    return 0;
}
