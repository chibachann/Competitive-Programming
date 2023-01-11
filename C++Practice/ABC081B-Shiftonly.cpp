#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, count=0;
    bool flag = 1;
    // input
    cin >> N;

    vector<int> A(N);
    // input
    for(int i=0;i<N;i++){
        cin >> A.at(i);
    }

    //judge even number
    while(flag){
        for(int i=0; i<N;i++){
            if(A.at(i) % 2 == 0){
                A.at(i) /= 2;
            }else{
                flag = 0;
                break;
            }
        }
        if(flag)count++;
    }
    cout << count;
    return 0;
}
