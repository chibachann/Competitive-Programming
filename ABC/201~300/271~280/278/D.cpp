#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

// mapを使用して、値を保存


int main(){
    map<int, long long> m;
    int n, q;
    cin >> n;
    rep(i, n){
        cin >> m[i];
    }
    int base = 0;
    cin >> q;
    int t;
    rep(i, q){
        cin >> t;
        if(t==1){
            int x;
            cin >> x;
            base = x;
            m.clear();
        }
        else if(t==2){
            int i,x;
            cin >> i >> x;
            m[i-1] += x;
        }
        else {
            int i;
            cin >> i;
            cout << base+m[i-1]<<endl;
        }
    }
    return 0;
}
