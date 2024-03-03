// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc229/tasks/abc229_c
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
        ll n, w;
        cin >> n >> w;
        multimap<ll, ll, greater<ll>> mmap;
        for (int i = 0; i < n; i++) {
            ll a, b;
            cin >> a >> b;
            mmap.insert({a, b});
        }
        ll ans = 0;
        ll grams = 0;
        for (auto&& [a, b] : mmap) {
            ll can_take_grams = std::min(w - grams, b);
            if (can_take_grams > 0) {
                grams += can_take_grams;
                ans += a * can_take_grams;
            } else {
                break;
            }
        }
        cout << ans << '\n';
    }
}
// ================= Notes ================= //
/*
 *  ans = (b[i] * a[i]) + (b[i+1] * a[i+1]) + ... + (b[n] * a[n]), where sum(b's) <= w 
 *
 *  that is picking w - b's is the optimal answer
 *  - maximizing A
 *  - boundary on B
 *  -> pick as many max A's as long as you fit into B
 *
 *  Ex.: 15 = (1 * 3) + (2 * 4) + (2 * 2)
 */

























