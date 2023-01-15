#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long i=2; i * i <= N; ++i){
        if (N % i != 0) continue;
        long long ex = 0; //指数

        // 割れる限り割り続ける
        while (N % i == 0) {
            ++ex;
            N /= i; 
        }

        // 結果を push
        res.push_back({i, ex});
    }
    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main(){
    long long N;
    cin >> N;
    const auto &res = prime_factorize(N);
    cout << N << ":";
    for (auto p : res) {
        rep(i, p.second)cout << " " << p.first;
    }
    cout << endl;
    return 0;
}
