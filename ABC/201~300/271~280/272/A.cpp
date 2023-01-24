#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    int n;
    cin >> n;
    int ans=0;
    rep(i, n){
        int x;
        cin >> x;
        ans += x;
    }
    cout << ans << endl;
    return 0;
}
