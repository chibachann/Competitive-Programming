#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

long long cal(int n){
    if(n==0) return 1;
    return (n * cal(n-1));
}

int main(){
    int n;
    cin >> n;
    long long  ans = cal(n);
    cout << ans << endl;
    return 0;
}
