#include <bits/stdc++.h>
using namespace std;
long long solve(long long x, long long n) {
    long long mod = n % 4;
    if (x % 2 == 0) {
        if (mod == 0) return x;
        if (mod == 1) return x - n;
        if (mod == 2) return x + 1;
        if (mod == 3) return x + n + 1;
    } else {
        if (mod == 0) return x;
        if (mod == 1) return x + n;
        if (mod == 2) return x - 1;
        if (mod == 3) return x - n - 1;
    }
    return x;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long  T;
    cin >> T;
    while (T--) {
        long long x,n,z;
        cin>>x>>n;
        z=solve(x,n);
        cout<<z<<endl;
        
        


    
        
        
    }
    return 0;
}
