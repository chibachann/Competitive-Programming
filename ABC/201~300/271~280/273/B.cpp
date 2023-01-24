#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    long long x,k,n=10;
    cin >> x >> k;
    int digit;
    stringstream ss;
    ss << x;
    string s = ss.str();
    digit = s.size()-1;
    rep(i, k){
        stringstream ss;
        ss << x;
        s = ss.str();
        if(s[digit-i] <= '4')x = (x/n)*n;
        else { x = (x/n + 1)*n;}
        n *= 10;
        if(x == 0)break;
        
    }
    cout << x << endl;
    
    return 0;
}
