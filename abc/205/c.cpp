#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace  atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;


int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    if(a < 0){
        if(b < 0){
            if(c % 2 == 0){
                if(abs(a) < abs(b)){
                    cout << "<" << endl;
                }else if(abs(a) > abs(b)){
                    cout << ">" << endl;
                }else{
                    cout << "=" << endl;
                }
            }else{
                if(abs(a) > abs(b)){
                    cout << "<" << endl;
                }else if(abs(a) < abs(b)){
                    cout << ">" << endl;
                }else{
                    cout << "=" << endl;
                }
            }
        }else if(b > 0){
            if(c % 2 == 0){
                if(abs(a) < b){
                    cout << "<" << endl;
                }else if(abs(a) > b){
                    cout << ">" << endl;
                }else{
                    cout << "=" << endl;
                }
            }else{
                cout << "<" << endl;
            }
        }else {
            if(c % 2 == 0){
                cout << ">" << endl;
            }else{
                cout << "<" << endl;
            }
        }
    }else if(a > 0) {
        if (b < 0) {
            if (c % 2 == 0) {
                if (a < abs(b)) {
                    cout << "<" << endl;
                } else if (a > abs(b)) {
                    cout << ">" << endl;
                } else {
                    cout << "=" << endl;
                }
            } else {
                cout << ">" << endl;
            }
        } else if (b > 0) {
            if (a < b) {
                cout << "<" << endl;
            } else if (a > b) {
                cout << ">" << endl;
            } else {
                cout << "=" << endl;
            }
        } else {
            cout << ">" << endl;
        }
    }else{
        if(c % 2 == 0){
            if(b == 0) {
                cout << "=" << endl;
            }else{
                cout << "<" << endl;
            }
        }else{
            if(b < 0){
                cout << ">" << endl;
            }else if(b > 0){
                cout << "<" << endl;
            }else{
                cout << "=" << endl;
            }
        }
    }

    return 0;
}
