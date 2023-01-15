#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,Q = 7;
    cin >> N;
    vector<int> a(N);
    for(int i=0;i<N;i++)cin >> a.at(i);

    cin >> Q; 

    vector<vector<int>> q(Q, vector<int>(3));
    for(int i=0;i<Q;i++){
        cin >> q.at(i).at(0) >> q.at(i).at(1);
        if(q.at(i).at(0) == 2){
            q.at(i).at(2) = -1;
        } else if (q.at(i).at(0) == 1){
            cin >> q.at(i).at(2);
        }
    }


    for(int i=0;i<Q;i++){
        if(q.at(i).at(0) == 2){
            cout << a.at(q.at(i).at(1)-1) << endl;
        } else if (q.at(i).at(0) == 1){
            a.at(q.at(i).at(1)-1) = q.at(i).at(2);
        }
    }
    
    /*cout << "q" << endl;
    for(int i=0;i<Q;i++){
        cout << intq.at(i).at(0) << ' ' << intq.at(i).at(1) <<' ' << intq.at(i).at(2) << endl;
    }*/

    


    return 0;
}
