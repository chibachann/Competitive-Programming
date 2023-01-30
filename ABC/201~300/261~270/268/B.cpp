#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    string s,t;
    cin >> s >> t;
    if(t.find(s) == 0)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
