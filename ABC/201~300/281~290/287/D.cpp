#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

bool match(string s, string t) {
    int n = s.length();
    int m = t.length();
    for (int i = 0; i < n; i++) {
        if (s[i] != '?' && s[i] != t[i] && t[i] != '?') {
            //cout << i << endl;
            return false;

        }
    }
    return true;
}

int main(){
    string s, t;
    cin >> s >> t;
    int n = t.size();
    rep(i, n+1){
        string s_ = s.substr(0, i) + s.substr(s.size() - n + i, n);
        //cout << "s: " << s_ << " t: " << t << endl;
        if(match(s_, t)){
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
    }

    
    
    return 0;
}
