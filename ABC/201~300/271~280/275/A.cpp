#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    int max_n=0;
    int max_i = 0;
    int n;
    cin >> n;
    rep(i, n){
        int a;
        cin >> a; 
        if(max_n < a){
            max_n = a;
            max_i = i+1;
        }
    }
    cout << max_i << endl;
    return 0;
}
