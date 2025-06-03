#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    double s; cin >> n >> s;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    bool flag = false;
    if(a[0] >= s+0.5){
        cout << "No\n";
        return 0;
    }

    for(int i=0; i<n-1; i++){
        double diff = a[i+1]-a[i];
        if(diff >= s+0.5){
            flag = true;
            break;
        }
        else{
            continue;
        }
    }

    if(!flag) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}