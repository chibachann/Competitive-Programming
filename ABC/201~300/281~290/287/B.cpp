#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    int n, m;
    cin >> n >> m;
    int count=0;

    vector<string> s(n);
    vector<string> t(m);
    rep(i, n){cin >> s[i];}
    rep(i, m){cin >> t[i];}

    vector<bool> flag(n,true);

    rep(i, m){
        rep(j, n){
            if(flag[j] && s[j].find(t[i], s[j].size() - t[i].size()) != std::string::npos){
                flag[j] = false;
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
