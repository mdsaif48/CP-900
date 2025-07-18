#include <bits/stdc++.h>
using namespace std;
long long solve(string s) {
    long long zeros = 0, ones = 0;
    for (auto x : s) {
        if (x == '0') zeros++;
        else ones++;
    }
    return min(zeros, ones);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long T;
    cin >> T;
    while (T--) {
        string a;
        cin >> a;
        
        long long result = solve(a);
        if((result%2)!=0){
            cout<<"DA"<<endl;
        }else{
            cout<<"NET"<<endl;
        }

        
    }

    return 0;
}
