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
    int ans;
    ans = n*1.08;
    if(ans < 206){
        cout << "Yay!" << endl;
    }else if(ans == 206) {
        cout << "so-so" << endl;
    }else{
        cout << ":(" << endl;
    }

    return 0;
}
