#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace  atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;

int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    set<string> se;
    for(int i = 0; i < (1 << n); ++i){
        string tmp = "";
        rep(j, n){
            if(i & (1 << j)){
                tmp += s[j];
            }
        }
        se.insert(tmp);
    }
    for(string i : se){
        if(i.size() != k) continue;
        cout << i << endl;
        return 0;
    }
}