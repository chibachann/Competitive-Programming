#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    long long a,b,c,d,e,f;
    int mod = 998244353,x,y;
    cin >> a >> b >> c >> d >> e >> f;
    x = ((a%mod) * (b%mod)) %mod;
    x = (x * (c%mod)) % mod;
    y = ((d%mod) * (e%mod)) %mod;
    y = (y * (f%mod)) % mod;
    long long ans = (x+mod-y)%mod;
    
    cout << ans << endl;
    return 0;
}
