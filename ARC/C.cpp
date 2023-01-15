#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)


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
        for(int j=0;j<(a[i]+1)/2;j++){
            for(int k=0;k<b[i];k++){
                if(j == a[i]-1-j && k>=b[i]/2)break;
                swap(s[j][k], s[a[i]-1-j][b[i]-1-k]);
            }
        }
        for(int j=0;j<(a[i]+1)/2;j++){
            for(int k=0;k<w-b[i];k++){
                if(j == a[i]-1-j && k>=(w-b[i])/2)break;
                swap(s[j][k+b[i]], s[a[i]-1-j][w-1-k]);
            }
        }

        for(int j=0;j<((h-a[i])+1)/2;j++){
            for(int k=0;k<b[i];k++){
                if(j == h-a[i]-1-j && k>=b[i]/2)break;
                swap(s[j+a[i]][k], s[h-1-j][b[i]-1-k]);
            }
        }

        for(int j=0;j<((h-a[i])+1)/2;j++){
            for(int k=0;k<w-b[i];k++){
                if(j == h-a[i]-1-j && k>=(w-b[i])/2)break;
                swap(s[j+a[i]][k+b[i]], s[h-1-j][w-1-k]);
            }
        }
        
    }
    rep(i, s.size())cout << s[i] << endl;

    return 0;
}
