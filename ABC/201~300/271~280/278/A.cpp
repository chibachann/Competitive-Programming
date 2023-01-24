#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    int n,k;
    cin >> n >> k;
    if(n<k)k=n;
    vector<int> a(n);
    rep(i, n)cin >> a[i];
    rep(i, k){
        a[i] = 0;
    }
    rep(i, n-k){
        swap(a[i] , a[k+i]);
    }
    rep(i, n)cout << a[i] << " ";
    cout << endl;
    return 0;
}
