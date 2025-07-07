#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t; 
    while (t--) {
        long long n,k;
        cin >> n;
        vector<long long> a(n);
        for(long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long x=a[n-1]-a[0];
        for(long long i=1;i<n;i++){
            x=max(x,a[i]-a[0]);

        }
        for(long long i=0;i<n-1;i++){
            x=max(x,a[n-1]-a[i]);

        }
        for(long long i=0;i<n-1;i++){
            x=max(x,a[i]-a[i+1]);

        }
        cout<<x<<endl;


        
    }
    return 0;
}