#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t; 
    while (t--) {
        long long a, b,n;
        cin>>a>>b>>n;
        vector<long long>tools(n);
        for(long long i=0;i<n;i++){
            cin>>tools[i];
        }
        sort(tools.begin(),tools.end());
        long long time=b;
        long long count=b;
        for(long long i=0;i<n;i++){
            count+=min(a-1,tools[i]);
            
            

                           
        }
        cout<<count<<endl;    
    }
    return 0;
}
