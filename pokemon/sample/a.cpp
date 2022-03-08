#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace  atcoder;
#define rep(i, n) for (long long i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;


using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int H, W;
vector<string> field;
vector<string> trainer;
vector<char> direction = {'N', 'S', 'E', 'W'};

// 探索
bool seen[510][510]; // seen[h][w] := マス (h, w) が検知済みかどうか
void dfs(int h, int w) {
    seen[h][w] = true;

    // 四方向を探索
    for (int dir = 0; dir < 4; ++dir) {
        int nh = h + dx[dir];
        int nw = w + dy[dir];

        // 場外アウトしたり、移動先が壁の場合はスルー
        if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
        if (field[nh][nw] == '#' || field[nh][nw] == 'N' || field[nh][nw] == 'S' || field[nh][nw] == 'E' || field[nh][nw] == 'W') continue;

        // 移動先が探索済みの場合
        if (seen[nh][nw]) continue;

        // 再帰的に探索
        dfs(nh, nw);
    }
}

int main(int argc, char *argv[]) {
    // このコードは標準入力と標準出力を用いたサンプルコードです。
    // このコードは好きなように編集・削除してもらって構いません。
    // ---
    // This is a sample code to use stdin and stdout.
    // Edit and remove this code as you like.
    int s_i=0, n_i=0, e_i=0, w_i=0;
    // 入力受け取り
    cin >> H >> W;
    field.resize(H);
    copy(field.begin(), field.end(), back_inserter(trainer));
    for (int h = 0; h < H; ++h) cin >> field[h];

    for(int i = 0; i < H; ++i){
        for(int j = 0; j < W; ++j){
            int di = i;
            int dj = j;
            if(field[i][j] == 'S'){
                while(1){
                    di -= 1;
                    if(di < 0 || field[di][j] == '#' || field[di][j] == 'S' || field[di][j] == 'E' || field[di][j] == 'W') continue;
                    trainer[di][j] = 'S' + ((char)s_i - '0');
                    s_i++;
                }
            }
            if(field[i][j] == 'N'){
                while(1){
                    di += 1;
                    if(di < 0 || field[di][j] == '#' || field[di][j] == 'N' || field[di][j] == 'E' || field[di][j] == 'W') continue;
                    trainer[di][j] = 'N' + ((char)n_i - '0');
                    n_i++;
                }
            }
            if(field[i][j] == 'E'){
                while(1){
                    dj -= 1;
                    if(dj < 0 || field[i][dj] == '#' || field[i][dj] == 'S' || field[i][dj] == 'E' || field[i][dj] == 'N') continue;
                    trainer[i][dj] = 'E' + ((char)s_i - '0');
                    e_i++;
                }
            }
            if(field[i][j] == 'W'){
                while(1){
                    dj += 1;
                    if(dj < 0 || field[i][dj] == '#' || field[i][dj] == 'S' || field[i][dj] == 'N' || field[i][dj] == 'W') continue;
                    trainer[i][dj] = 'W' + ((char)w_i - '0');
                    w_i++;
                }
            }
        }
    }

    // s と g のマスを特定する
    int sh, sw, gh, gw;
    for (int h = 0; h < H; ++h) {
        for (int w = 0; w < W; ++w) {
            if (field[h][w] == 'A') sh = h, sw = w;
            if (field[h][w] == 'B') gh = h, gw = w;
        }
    }

    // 探索開始
    memset(seen, 0, sizeof(seen)); // seen 配列全体を false に初期化
    dfs(sh, sw);

    // 結果
    if (seen[gh][gw]) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

