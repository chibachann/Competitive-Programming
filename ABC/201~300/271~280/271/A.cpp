#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    int n;
    cin >> n;
    string s;
    while(n>0){
        if(n%16<10){s+='0'+(n%16);}
        else{ s+='A' + ((n%16)-10);}
        n/=16;
    }
    if(s.size()==1)s+='0';
    if(s.size()==0)s+="00";
    reverse(s.begin(),s.end());
    cout << s << endl;
    return 0;
}
