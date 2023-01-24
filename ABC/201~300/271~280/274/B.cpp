#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h){
        cin >> s[i];
    }
    rep(i, w){
        int c=0;
        rep(j, h){
            if(s[j][i]=='#')c++;
        }
        cout << c << " ";
    }
    cout << endl;
    return 0;
}
