// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/337/A
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
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<int> v(m);
        for (int i = 0; i < m; i++) {
            cin >> v[i];
        }
        std::sort(v.begin(), v.end());
        int ans = INT_MAX;
        for (int i = 0; i < m - n + 1; i++) {
            ans = std::min(ans, std::abs(v[i] - v[i + n - 1]));
        }
        cout << ans << '\n';
    }
}
// ================= Notes ================= //
/*
 *  5 7 10 10 12 22
 *  5 7 10 10 -> 5
 *  7 10 10 12 -> 5
 *  10 10 12 22 -> 12
 */

























