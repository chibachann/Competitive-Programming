#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    int a,b,c,d;
    cin >> a>>b>>c>>d;
    int ans = (a+b) * (c-d);
    cout << ans << endl;
    cout << "Takahashi\n";
    return 0;
}
