//#include <bits/stdc++.h>
#include <vector>
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
#define rep(i, n) for (long long i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;


int main() {
    int a, b;
    cin >> a >> b;
    if(abs(a-b) == 1) cout << "Yes" << endl;
    else if(a == 1 && b == 10 || a == 10 && b == 1) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
