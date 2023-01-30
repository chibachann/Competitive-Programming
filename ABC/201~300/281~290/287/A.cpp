#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    int n;
    cin >> n;
    int count = 0;
    rep(i, n){
        string s;
        cin >> s;
        if(s == "For")count++;
    }

    if((n+1)/2<=count){cout << "Yes";}
    else {cout << "No";}
    cout << endl;
    return 0;
}
