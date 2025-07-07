#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(long long i=0;i<n;i++){
            if(a[i]==1){
                a[i]+=1;
                
            }

        }
        
            for(long long i = 1; i < n; i++){
                if(a[i]%a[i-1]==0){
                    a[i]+=1;
                    
                }
            }
        
        for(auto it:a){
            cout<<it<<" ";
        }
        cout<<endl;

       
    }

    return 0;
}
