// time-limit: 1000
// problem-url: https://codeforces.com/contest/1848/problem/A
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
    cin >> tt;
    while (tt--) {
        // n and m: size of the mall
        // k: the number of vika's friends
        int n, m, k;
        cin >> n >> m >> k;
        int x, y;
        cin >> x >> y;
        set<pair<int, int>> set;
        for (int i = 0; i < k; i++) {
            int a, b;
            cin >> a >> b;
            set.insert({a, b});
        }
        bool ans = true;
        if (set.find({x, y}) != set.end()) {
            ans = false;
        }
        for (auto kv : set) {
            int p = kv.first;
            int q = kv.second;
            if ((std::abs(x - p) + std::abs(y - q)) % 2 == 0) {
                ans = false;
                break;
            }
        }
        cout << (ans ? "YES" : "NO") << '\n';
    }
}
// ================= Notes ================= //
/*
 *
 */

























