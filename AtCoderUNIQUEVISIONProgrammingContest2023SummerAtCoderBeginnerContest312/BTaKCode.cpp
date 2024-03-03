// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc312/tasks/abc312_b
// ================= Header ================= //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#ifdef DEBUG
#define db(x...) cerr << "\e[91m"<<__func__<<":"<<__LINE__<<" [" << #x << "] = ["; _print(x); cerr << "\e[39m" << endl;
#else
#define db(x...)
#endif

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x);
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), __print(i); cerr << "}";}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ", "; __print(x.second); cerr << '}';}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

const int MOD = 1000000007;
const double PI = 3.14159265359;

// ================= Order ================= //

// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        set<pair<int, int>> set;
        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < m - 2; j++) {
                if (v[i][j] == '#' && v[i][j + 1] == '#' && v[i][j + 2] == '#') {
                    if (v[i + 1][j] == '#' && v[i + 1][j + 1] == '#' && v[i + 1][j + 2] == '#') {
                        if (v[i + 2][j] == '#' && v[i + 2][j + 1] == '#' && v[i + 2][j + 2] == '#') {
                            set.insert({i, j});
                        }
                    }   
                }
            }       
        }
        for (auto iter1 = set.begin(); iter1 != set.end(); ++iter1) {
            for (auto iter2 = iter1; ++iter2 != set.end();) {
                auto pair1 = *iter1;
                auto pair2 = *iter2;
                if (pair1.first + 6 < n && pair1.second + 6 < m &&
                    pair1.first + 6 == pair2.first && pair1.second + 6 == pair2.second) {
                    int x = pair1.first;
                    int y = pair1.second;
                    db(x, y);
                    bool yes = true;
                    if (x + 4 < n && y + 4 < m) {
                        for (int i = x; i < x + 4; i++) {
                            int j = y + 3;
                            if (v[i][j] != '.') {
                                db("here");
                                yes = false;
                                break;
                            }
                        }
                        for (int j = y; j < y + 4; j++) {
                            int i = x + 3;
                            if (v[i][j] != '.') {
                                db("here");
                                yes = false;
                                break;
                            }
                        }
                        x = pair2.first;
                        y = pair2.second;
                        for (int i = x; i < x + 3; i++) {
                            int j = y - 1;
                            if (v[i][j] != '.') {
                                db("here");
                                yes = false;
                                break;
                            }
                        }
                        for (int j = y - 1; j < y + 3; j++) {
                            int i = x - 1;
                            if (v[i][j] != '.') {
                                db("here");
                                yes = false;
                                break;
                            }
                        }
                        if (yes) {
                            cout << pair1.first + 1 << " " << pair1.second + 1 << '\n';
                        }
                    }
                }
            }
        }
    }
}
// ================= Notes ================= //
/*
    # - black
    . - white

    10 2
    16 8

    Find all positions of 3x3, then check for each (i, j), if there is another at positions (i + 6, j + 6) && i < n, j < m
*/

























