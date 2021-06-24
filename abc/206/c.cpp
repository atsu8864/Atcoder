#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef pair<int,int> P;

const int INF = 1001001001;
const long double PI = (acos(-1));
const int MOD = 1e9+7;
const int vx[4] = {0,1,0,-1};
const int vy[4] = {1,0,-1,0};

int main() {
    int n;
    cin >> n;
    map<int, int> m;
    ll ans = 0;
    for(int i = 0; i < n; ++i){
        int b;
        cin >> b;
        if(i-m[b] > 0){
            ans += i-m[b];
        }
        m[b]++;
    }
    cout << ans << endl;
    return 0;

}
