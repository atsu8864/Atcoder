#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace  atcoder;
#define rep(i, n) for (long long i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;


int main() {
    int a, b;
    cin >> a >> b;
    if(a <= b && b <= a*6){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
