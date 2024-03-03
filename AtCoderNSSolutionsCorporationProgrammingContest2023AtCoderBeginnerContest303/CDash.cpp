// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc303/tasks/abc303_c
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
        int n, m, h, k;
        cin >> n >> m >> h >> k;
        string s;
        cin >> s;
        set<pair<int, int>> hearts;
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            hearts.insert({x, y});
        }
        pair<int, int> pos = {0, 0};
        int i = 0;
        while (h >= 0 && i < n) {
            if (s[i] == 'R') {
                pos.first++;
            } else if (s[i] == 'U') {
                pos.second++;
            } else if (s[i] == 'L') {
                pos.first--;
            } else if (s[i] == 'D') {
                pos.second--;
            }
            h--;
            if (h < 0) {
                break;
            }
            auto it = hearts.find(pos);
            if (it != hearts.end()) {
                if (h < k) {
                    h = k;
                    hearts.erase(it);
                }
            }
            i++;
        }
        if (h >= 0) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }
}
// ================= Notes ================= //
/*
 *  start at (0, 0)
 *  H is his initial health
 *  he can only consume heart if his H < K
 *  goal is to make N moves
 *  there are M hearts at map
 */

























