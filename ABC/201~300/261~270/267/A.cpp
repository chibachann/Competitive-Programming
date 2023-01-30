#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    vector<string> s = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    string h;
    cin >> h;
    rep(i, 5){
        if(s[i]==h){
            cout << 5 - i << endl;
        }
    }
    return 0;
}
