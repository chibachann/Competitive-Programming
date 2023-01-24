#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i, n)cin >> a[i];
    rep(i, n){
        if(x == a[i]){
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}
