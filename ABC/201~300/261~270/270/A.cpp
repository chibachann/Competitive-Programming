#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    int a,b;
    cin >> a >> b;
    int ans=0;
    bool flg=false;
    vector<int> test={1,2,4};
    for(int i=2;i>=0;i--){
        if(a>=test[i]&&b>=test[i])flg=true;
        if(a>=test[i]){
            a-=test[i];
            ans += test[i];
        }
        if(b>=test[i]){
            b-=test[i];
            ans += test[i];
        }
        if(flg)ans-=test[i];
        flg=false;
    }
    cout << ans << endl;
    return 0;
}
