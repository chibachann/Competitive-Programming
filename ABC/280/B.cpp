#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(int)(n);i++)

int main(){
    int n;
    cin >> n;
    vector<long long int> s(n);
    rep(i, n)cin >> s[i];

    vector<long long int> a(n);
    a[0] = s[0];
    rep(i, n-1)a[i+1] = s[i+1]-s[i];
    rep(i, n){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
