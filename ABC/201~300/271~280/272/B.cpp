#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<bool>> a(n,vector<bool>(n,false));

    rep(i, m){
        int k;
        cin >> k;
        vector<int> x(k);
        rep(i, k){
            cin >> x[i];
        }
         
        for(int i=0;i<k;i++){
            for(int j=i+1;j<k;j++){
                if(!a[x[i]-1][x[j]-1]){
                    a[x[i]-1][x[j]-1]=true;
                }
            }
        }
    }
    rep(i ,n-1){
        rep2(j, i+1, n){
            if(!a[i][j]){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
