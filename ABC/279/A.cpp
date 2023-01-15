#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    string s;
    cin >> s;
    int ans=0;
    rep(i, s.size()){
        if (s[i] == 'v')ans++;
        else ans+=2;
    }
    cout << ans << endl;
    return 0;
}
