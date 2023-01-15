#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

vector<long long> enum_divisors(long long N){
    vector<long long> res;
    for (long long i = 1; i*i <= N; ++i){
        if (N % i == 0){
            res.push_back(i);
            // 重複しないならば i の相方の N/i も push
            if (N/i != i)res.push_back(N/i);
        }
    }
    // 小さい順に並び替える
    sort(res.begin(), res.end());
    return res;
}


int main(){
    long long N;
    cin >> N;
    const auto &res = enum_divisors(N);
    rep(i, res.size()) cout << res[i] << " ";
    cout << endl;
    return 0;
}
