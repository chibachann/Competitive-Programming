#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    string s,t;
    cin >> s;
    cin >> t;
    int count=1;
    for(int i=0; s[i]==t[i]; i++)count++;
    cout << count << endl;
    return 0;
}
