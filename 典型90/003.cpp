#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace  atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;

int n;
int dist[1 << 18];

void bfs(int start, vector<int> G[]){
    rep(i, n) dist[i] = 1001001001;
    dist[start] = 0;
    queue<int> q;
    q.push(start);

    while(!q.empty()){
        int pos = q.front();
        q.pop();
        for(int to : G[pos]){
            if(dist[to] == 1001001001){
                dist[to] = dist[pos] + 1;
                q.push(to);
            }
        }
    }
}

int main(){
    vector<int> G[1 << 18];
    cin >> n;
    rep(i, n-1){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    int max_id = -1;
    int max_num = -1;
    bfs(1, G);
    rep(i, n){
        if(max_num < dist[i]){
            max_num = dist[i];
            max_id = i;
        }
    }
    bfs(max_id, G);
    rep(i, n){
        if(max_num < dist[i]){
            max_num = dist[i];
        }
    }
    cout << max_num + 1 << endl;
    return 0;

}