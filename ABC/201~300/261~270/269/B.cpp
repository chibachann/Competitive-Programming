#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    vector<string> s(10);
    rep(i, 10)cin >> s[i];
    int a=-1,b=-1,c=-1,d=-1;
    rep(i, 10){
        rep(j,10){
            if(s[i][j] == '#'){
                a = i;
                c = j;
                break;
            }
        }
        if(a!=-1)break;
    }
    for(int i=9;i>=0;i--){
        for(int j=9;j>=0;j--){
            if(s[i][j] == '#'){
                b = i;
                d = j;
                break;
            }
        }
        if(b!=-1)break;
    }
    a++,b++,c++,d++;
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
    return 0;
}
