#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

void lotation(vector<string> &B, int a, int b){
    for(int j=0;j<(a+1)/2;j++){
        for(int k=0;k<b;k++){
            if(j == a-1-j && k>=b/2)break;
            swap(B[j][k], B[a-1-j][b-1-k]);
        }
    }
}

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h)cin >> s[i];
    int Q;
    cin >> Q;
    vector<int> a(Q), b(Q);
    rep(i, Q)cin >> a[i] >> b[i];

    rep(i, Q){
        vector<string> B1(a[i]), B2(a[i]), B3(h-a[i]), B4(h-a[i]);
        rep(j, a[i]){
            B1[j] = s[j].substr(0, b[i]);
            B2[j] = s[j].substr(b[i]);
        }
        for(int j=a[i]; j<h;j++){
            B3[j-a[i]] = s[j].substr(0, b[i]);
            B4[j-a[i]] = s[j].substr(b[i]);
        }
        
        lotation(B1, a[i], b[i]);
        lotation(B2, a[i], w-b[i]);
        lotation(B3, h-a[i], b[i]);
        lotation(B4, h-a[i], w-b[i]);
        rep(j, a[i]){
            s[j] = B1[j] + B2[j];
        }
        rep(j, h-a[i]){
            s[j+a[i]] = B3[j] + B4[j];
        }
        
    }
    rep(i, s.size())cout << s[i] << endl;

    return 0;
}
