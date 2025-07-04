#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t; 
    while (t--) {
        long long n, k;
        string s;
        cin >> n >> k >> s;

        vector<char> a;
        for (long long i = 0; i < n; i++) {
            a.push_back(s[i]);
        }

        map<char, long long> freq;
        for (long long i = 0; i < n; i++) {
            freq[a[i]]++;
        }

        long long count = 0;
        for (auto it = freq.begin(); it != freq.end(); ++it) {
            if (it->second % 2 == 1) {
                count++;
            }   
        }
        if(a.size()==2 && k==1){
            cout<<"YES"<<endl;
        }
        else if(a.size()==2 && k==0){
            if(a[0]==a[1]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(a.size()==1){
            cout<<"YES"<<endl;
        }

        else{
            if(count-k<=1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
