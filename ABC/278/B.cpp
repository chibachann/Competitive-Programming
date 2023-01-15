#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    int h, m;
    cin >> h >> m;
    int wh, wm;
    while(1){    
        int A,B,C,D;
        A = h/10;
        B = h%10;
        C = m/10;
        D = m%10;
        
        wh = 10*A + C;
        wm = 10*B + D;
        if(wh<=23 && wm <= 59)break;
        if(m<=58)m++;
        else if(m==59){
            m=0;
            if(h!=23)h++;
            else h=0;
        }
        
    }
    cout << h << " " << m << endl;
    return 0;
}
