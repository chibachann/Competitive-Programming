#include<bits/stdc++.h>
using namespace std;

int main() {
    // 整数Tを入力する
    int T;
    cin >> T;
    long long int N;
    vector<long long int> p(T);
    vector<long long int> q(T);
    for(int i=0;i<T;i++){
        cin >> N;
        // N=p*p*qとなるp、qを求める
        p[i] = 0;
        q[i] = 0;
        long long int s = sqrt(N);
        for (int j = 2; j <= s; j++) {
            if (N % j == 0) {
                if((N/j) % j == 0){
                    p[i] = j;
                    q[i] = N/j/j;
                }else{
                    p[i] = sqrt(N/j);
                    q[i] = j;
                }
                break;
            }
        }
    }
    for(int i=0;i<T;i++){
        cout << p[i] << " " << q[i] << endl;
    }

    return 0;
}
