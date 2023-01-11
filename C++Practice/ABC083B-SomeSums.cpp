#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, a, b;
    int sum=0, tmp=0,ans=0;
    cin >> N >> a >> b;

    for(int i=1;i<=N;i++){
        tmp = i;
        while(tmp > 0){
            sum += tmp%10;
            tmp /= 10;
        }
        if(a <= sum && sum <= b){
            ans += i;
        }
        sum = 0;
    }

    cout << ans << endl;

    return 0;
}
