#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    string s,t;
    cin >> s;
    cin >> t;
    if(t.size()>>s.size()){
        cout << "No" << endl;
        return 0;
    }
    // npos は find() の返り値で、見つからなかったときの返り値
    if(s.find(t) != string::npos)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}   
