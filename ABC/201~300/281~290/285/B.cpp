#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    int p=1,count=0;
    rep(i, n-1){
        for(int j=0;j+p<n;j++){
            if(s[j] == s[j+p])break;
            count++;
        }
        p++;
        cout << count << endl;
        count = 0;
    }
    return 0;
}
