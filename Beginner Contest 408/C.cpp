#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n, m; cin >> n >> m;
    
    vector<int> diff(n+2, 0);

    for(int i=0; i<m; i++){
        int l, r; cin >> l >> r;
        diff[l]++;
        diff[r+1]--;
    }

    vector<int> coverage(n+1);
    int current = 0;
    for(int i=1; i<=n; i++){
        current += diff[i];
        coverage[i] = current;
    }

    int min = n;
    for(int i=1; i<=n; i++){
        if(coverage[i] < min){
            min = coverage[i];
        }
    }

    cout << min << endl;

    return 0;
}