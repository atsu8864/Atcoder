//#include <bits/stdc++.h>
#include <vector>
#include<iostream>
#include<math.h>
using namespace std;
#define rep(i, n) for (long long i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;


int main() {
    int v, a, b, c;
    cin >> v >> a >> b >> c;
    while(v >= 0){
        v -= a;
        if(v < 0){
            cout << "F" << endl;
            return 0;
        }
        v -= b;
        if(v < 0){
            cout << "M" << endl;
            return 0;
        }
        v -= c;
        if(v < 0){
            cout << "T" << endl;
            return 0;
        }
    }



    return 0;
}
