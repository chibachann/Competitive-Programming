#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> s(h),t(h);

    rep(i, h)cin >> s[i];
    rep(i, h)cin >> t[i];

        // A.
    vector<string> Ts(w),Tt(w);
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
        Ts[j].push_back(s[i][j]);
        Tt[j].push_back(t[i][j]);
        }
    }
    // B.
    sort(Ts.begin(),Ts.end());
    sort(Tt.begin(),Tt.end());
    if(Ts==Tt){cout << "Yes\n";}
    else{cout << "No\n";}


    return 0;
}
