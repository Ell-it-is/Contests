// time-limit: 2000
// problem-url: https://codeforces.com/gym/420506/problem/B
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

// ================= Order ================= //

// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m, tt;
    cin >> n >> m >> tt;
    vector<vector<int>> v(m);
    for (int i = 0; i < n; i++) {
        v[0].push_back(i);
    }
    db(v);
    while (tt--) {
		char c;
        cin >> c;
        int a, b;
        cin >> a >> b;
        if (c == 's') {
            // move object from top of basket a -> to top of basket b
            int top = v[a].back();
            v[a].pop_back();
            v[b].push_back(top);
            db(v);
        } else if (c == 'c') {
            // print number of an object positioned i-th in the basket a
            if (b < (int)v[a].size()) {
                cout << v[a][b] << '\n';
            } else {
                cout << -1 << '\n';
            }
        }
    }
}
// ================= Notes ================= //
/*
 *
 */

























