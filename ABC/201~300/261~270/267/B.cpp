#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

main(){
    string s;
    cin >> s;
    

    if(s[0]=='1'){
        cout << "No" << endl;
    }else{
        array<bool, 7> column  = {};
        column[0] = (s[6] == '1');
        column[1] = (s[3] == '1');
        column[2] = (s[1] == '1') or (s[7] == '1');
        column[3] = (s[0] == '1') or (s[4] == '1');
        column[4] = (s[2] == '1') or (s[8] == '1');
        column[5] = (s[5] == '1');
        column[6] = (s[9] == '1');
        rep(i, 7){
            rep(j, i){
                if(column[i] and column[j]){
                    rep2(k, j+1, i){
                        if(!column[k]){
                            cout << "Yes" << endl;
                            return 0;
                        }
                    }
                }
            }
        }
        cout << "No\n";
    }
    
    return 0;
}
