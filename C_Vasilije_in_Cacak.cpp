#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t; 
    while (t--) {
        long long n, k,x;
        cin>>n>>k>>x;
        if(x>n*k-k*(k-1)/2 ||x<k*(k+1)/2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        

        
    }
    return 0;
}
