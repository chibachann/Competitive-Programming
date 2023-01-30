#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    int n;
    cin >> n;
    int p, q, r,s ;
    cin >> p >> q >> r >>s;
    vector<int> a(n);
    rep(i, n)cin >> a[i];
    int tmp;
    rep(i, q-p+1){
        tmp = a[p-1+i];
        a[p-1+i] = a[r-1+i];
        a[r-1+i] = tmp;
    }
    rep(i, n)cout << a[i]<< " ";
    cout << endl;
    return 0;
}
