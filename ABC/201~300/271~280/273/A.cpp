#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int cul(int n){
    if (n==0)return 1;
    return n*cul(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << cul(n) << endl;
    return 0;
}
