#include <bits/stdc++.h>
using namespace std;
int main() {

    long long t;
    cin >> t; 
    while (t--) {
        long long n,i;
        cin>>n>>i;
        vector<long long>a(n);
        for(long long x=0;x<n;x++){
            cin>>a[x];
        }
        long long count=1;
        long long maxlen=1;
        sort(a.begin(),a.end());
        for(long long x=1;x<n;x++){
            if(a[x]-a[x-1]<=i){
                count++; 
            }
            else{
                count=1;
                
            }
            maxlen=max(maxlen,count);
        }        
        
        cout<<n-maxlen<<endl;                
        }
    return 0;
            
    }
   

