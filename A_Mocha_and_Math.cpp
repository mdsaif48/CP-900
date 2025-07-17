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
        long long c=a[0];
        for (long long i = 1; i < n; i++) {
            c=c&a[i];
        }
        cout<<c<<endl;

        
    }
    return 0;
}
