#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,i,sub=0;
    cin >>N;
    vector<int> a(N);
    for(i=0;i<N;i++){
        cin >> a.at(i);
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());



    for(i=0;i<N;i++){
        if(i%2 == 0){
            sub += a.at(i);
        } else {
            sub -= a.at(i);
        }
    }

    cout << sub << endl;

    return 0;
}
