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
        long long count=0;
        long long max_0=0;
        long long count_0=0;
        for(long long i = 0; i < n; i++){
            if(a[i]==0){
                count++;
            }
        }
        for(long long i = 0; i < n; i++){
            if(a[i]!=0){
                count_0++;
                max_0=max(max_0,count_0);               
            }
            else{
                count_0=0;
            }
        }
        
        if(max_0+count==n && count!=n ){
            cout<<1<<endl;
        }
        else if(count==n){
            cout<<0<<endl;
        }
        else{
            cout<<2<<endl;
        }
    


        
    }
    return 0;
}