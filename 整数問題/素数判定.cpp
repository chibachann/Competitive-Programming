#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

bool is_prime(long long N){
    if(N == 1)return false;
    for (long long i=2; i*i<=N; i++){
        if (N%i==0) return false;
    }
    return true;
}

int main(){
    long long N;
    cin >> N;
    if (is_prime(N)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
