#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace  atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;

bool acc_parentheses(string s){
    int sum = 0;
    rep(i, s.size()){
        if(s[i] == '('){
            sum++;
        }else{
            sum--;
        }
        if(sum < 0){
            return false;
        }
    }
    if(sum != 0) return false;
    return true;
}

int main(){
    int n;
    cin >> n;
    set<string> set1;
    if(n % 2 == 1) return 0;
    for(int i = 0;i < 1 << n; ++i){
        string s = "";
        rep(j, n){
            if(i & 1 << j){
                s += "(";
            }else{
                s += ")";
            }
        }
        if(acc_parentheses(s)){
            set1.insert(s);
        }
    }
    for(string s : set1){
        cout << s << endl;
    }
}