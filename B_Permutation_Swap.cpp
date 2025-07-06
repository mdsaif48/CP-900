#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t; 

    while (t--) {
        long long n;
        cin >> n;
        vector<long long>a(n);
        for(long long i=0 ; i<n ;i++){
            cin>>a[i];
        }
        vector<long long >b(n);
        for(long long i=0 ; i<n ;i++){
            b[i]=abs(a[i]-i-1);
        }
        long long initial_gcd=b[0];
        for(long long i=1 ; i<n ;i++){
            initial_gcd=__gcd(initial_gcd,b[i]);

    }
        cout<<initial_gcd<<endl;

        
    }

    return 0;
}

