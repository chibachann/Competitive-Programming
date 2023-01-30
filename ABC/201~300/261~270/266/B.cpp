#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    long long n;
    cin >> n;
    long long mod = 998244353;
    if(n>0){
        cout << n%mod << endl;
    }else{
        cout << mod + (n%mod) << endl;
    }

    return 0;
}
