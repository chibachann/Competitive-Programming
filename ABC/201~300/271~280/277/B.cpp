#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)


bool is_valid(string s) {
    if (s[0] != 'H' && s[0] != 'D' && s[0] != 'C' && s[0] != 'S') return false;
    if (s[1] != 'A' && s[1] != '2' && s[1] != '3' && s[1] != '4' && s[1] != '5' && s[1] != '6' && s[1] != '7' && s[1] != '8' && s[1] != '9' && s[1] != 'T' && s[1] != 'J' && s[1] != 'Q' && s[1] != 'K') return false;
    return true;
}

int main(){
    int n;
    cin >> n;
    string s;
    bool flg=false;
    set<string> a;
    rep(i, n){
        cin >> s;
        if(!is_valid(s)){flg=true;}
        if(a.count(s)>0){flg=true;}
        a.insert(s);
    }
    if(flg){cout << "No";}
    else {cout << "Yes";}
    cout << endl;
    


    return 0;
}
