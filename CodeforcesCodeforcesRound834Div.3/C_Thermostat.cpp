// time-limit: 1000
// problem-url: https://codeforces.com/contest/1759/problem/C
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
    cin >> tt;
    while (tt--) {
        ll l, r, x;
        cin >> l >> r >> x;
        ll a, b;
        cin >> a >> b;
        if (a == b) {
            cout << 0 << '\n';
            continue;
        }
        ll ans = 0;
        ll dist_a_to_b = std::abs(a - b);
        if (dist_a_to_b >= x) {
            ans = 1;
        } else {
            // dist < x
            // jump where you can (in boundaries) that creates as much space between you and point b
            ll b_start = std::abs(b - l);
            ll b_end = std::abs(b - r);
            ll a_start = std::abs(a - l);
            ll a_end = std::abs(a - r);
            if (b_start < b_end) {
                // b closer to start, wanna jump from a to end
                if (x <= a_end) {
                    if (x <= std::abs(r - b)) {
                        ans = 2;
                    } else {
                        ans = -1;  
                    }
                } else if (x <= a_start) {
                    if (x <= std::abs(r - b)) {
                        ans = 3;
                    } else {
                        ans = -1;
                    }
                } else {
                    ans = -1;
                }
            } else if (b_start >= b_end) {
                // b further away to start, wanna jump from a to start
                if (x <= a_start) {
                    if (x <= std::abs(l - b)) {
                        ans = 2;
                    } else {
                        ans = -1;
                    }
                } else if (x <= a_end) {
                    if (x <= std::abs(r - b)) {
                        ans = 2;
                    } else {
                        if (x <= std::abs(l - b)) {
                            ans = 3;
                        } else {
                            ans = -1;
                        }
                    }
                } else {
                    ans = -1;
                }
            }
        }
        cout << ans << '\n';
    }
}
// ================= Notes ================= //
/*
 *  [l, ..., r]
 *  - current temp can change by ATLEAST x
 *      - in one operation
 *      - it's possible to both incr/decr current temp
 *
 *  init temp: a
 *  final temp: b
 *
 *  Is it possible to go from 'a' to 'b'? And if so, in how many steps?
 *
 *  
 */
