// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc292/tasks/abc292_c
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
int get_divisors(int x) {
    int cnt = 0;
    for (int i = 1; i <= x / 2; i++) {
        if (x % i == 0) cnt++;
    }
    return cnt;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        ll ans = 0;
        for (int i = 1; i < n; i++) {
            int X = i;
            int Y = n - i;
            ll x = 0;
            ll y = 0;
            for (int j = 1; j * j <= X; j++) {
                if (X % j == 0) {
                    x++;
                    if (X != j * j) x++;
                }
            }
            for (int j = 1; j * j <= Y; j++) {
                if (Y % j == 0) {
                    y++;
                    if (Y != j * j) y++;
                }
            }
            ans += x * y;
        }
        cout << ans << '\n';
    }
}
// ================= Notes ================= //
/*
 *  count(AB + CD = N) <= unsinged long long
 */

























