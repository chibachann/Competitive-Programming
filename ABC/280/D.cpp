#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    long long N;
    cin >> N;
    long long ans=1, x=0, n;

    for (long long i=2; i * i <= N; ++i){
        long long ex = 0; //指数

        // 割れる限り割り続ける
        while (N % i == 0) {
            ++ex;
            N /= i; 
        }
        n=0;
        while(ex>0){
            n += i;
            x = n;
            while(x%i==0)x /= i,ex--;
        }
        ans = max(ans, n);
    }
    ans = max(ans,N);
    cout << ans << endl;
    return 0;
}
