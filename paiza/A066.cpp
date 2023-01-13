#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    struct Work
    {
        int start;
        int end;
    };
    
    Work works[n];
    for (int i = 0; i < n; i++) {
        cin >> works[i].start >> works[i].end;
    }
    /*cout << "before sort :" << endl;
    for (int i = 0; i < n; i++) {
        cout << works[i].start <<" "<< works[i].end << endl;
    }
    sort(works, works+ n, [](const Work& a, const Work& b){
        return a.end < b.end;
    });
    cout << "after sort :" << endl;
    for (int i = 0; i < n; i++) {
        cout << works[i].start <<" "<< works[i].end << endl;
    }*/
    vector<bool> visited(n, false);
    int s=0,e=0;
    int max_con = 0;
    // 未探索の頂点を探索する
    for (int i=0;i<n;i++){
        if(!visited[i]){
            visited[i] = true;
            s = works[i].start;
            e = works[i].end;
            for(int j=i+1;j<n;j++){
                if(works[j].start <= e+1 && !visited[j]){
                    s = min(s, works[j].start);
                    e = max(e, works[j].end);
                    visited[j] = true;
                }
            }
            max_con = max(max_con, e-s+1);
            
        }
    }
    cout << max_con << endl;
    
    return 0;
}
