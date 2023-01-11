#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, Y;
    bool flag = 0;
    cin >> N >> Y;

    for(int i=0;i<=N;i++){
        for(int j=0;j<=N-i;j++){
            int k = N -i -j;
            if(Y - 10000*i - 5000*j -1000*k == 0){
                cout << i << ' ' << j << ' ' << k << ' ' << endl;
                flag = 1;
            }
            if(flag)break;
        }
        if(flag)break;
    }
    if(flag == 0){
        cout << -1 << ' ' << -1 << ' ' << -1 << ' ' << endl;
    }

    return 0;
}
