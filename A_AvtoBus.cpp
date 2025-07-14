#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t; 
    while (t--) {
        long long n;
        cin >> n;
        long long k=n/4;
        long long l=n/6;
        long long c=ceil(n*1.0/6);
        
        if(n<4||n%2!=0){
            cout<<-1<<endl;
        }
        else{
            cout<<c<<" "<<n/4<<endl;
        }      
    }
    return 0;
}