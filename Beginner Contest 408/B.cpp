#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n; cin >> n;

    set<int> a;

    for(int i=0; i<n; i++){
        int x; cin >> x;
        a.insert(x);
    }

    cout << a.size() << endl;
    bool flag = true;
    for(int x : a){
        if(!flag){
            cout << " ";
        }
        flag = false;
        cout << x;
    }
    cout << endl;

    return 0;
}