#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t; 
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long count_1 = 0,count_0=0;
        for(long long i = 0; i < n; i++) {
            if (a[i] == 1) {
                count_1++;
            } else if (a[i] == 0) {
                count_0++;
            }
        }
        long long ans= pow(2,count_0)*count_1;
        cout << ans << endl;


        
    }
    return 0;
}
