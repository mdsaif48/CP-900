#include <bits/stdc++.h>
using namespace std;
int main() {

    long long t;
    cin >> t; 
    while (t--) {
        long long n;
        cin>>n;
        vector<char>a(n);
        for(long long x=0;x<n;x++){
            cin>>a[x];
        }
        long long count=1;
        long long maxlen=1;
        
        for(long long x=1;x<n;x++){
            if(a[x]==a[x-1]){
                count++; 
            }
            else{
                count=1;
                
            }
            maxlen=max(maxlen,count);
        }        
        
        cout<<maxlen+1<<endl;                
        }
    return 0;
            
    }
   

