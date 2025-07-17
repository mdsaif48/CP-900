#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long T;
    cin >> T;
    while (T--) {
        long long n; 
        cin >> n;
        bool flag=true;
        long long k=0;
        while(n > (1LL << k)){
            if(n % (1LL << k)!= 0){
                flag=false;
                break;
            }
            else{
                k++;
            }
        }

        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }

    return 0;
}

        
    