#include<bits/stdc++.h>
using namespace std;

int count_AB(const string& s) {
    int count = 0;
    for(int i = 1; i < s.size(); i++) {
        if(s[i-1] == 'a' && s[i] == 'b') count++;
    }
    return count;
}

int count_BA(const string& s) {
    int count = 0;
    for(int i = 1; i < s.size(); i++) {
        if(s[i-1] == 'b' && s[i] == 'a') count++;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        if(s[0]==s[s.size()-1]){
            cout<<s<<endl;
        }
        else{
            s[0]=s[s.size()-1];
            cout<<s<<endl;
        }
    
    }
    return 0;
}
