// time-limit: 2000
// problem-url: https://codeforces.com/contest/1744/problem/B
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
// tc: 100000
// n: 100000
// time(s): 2
// order: O(1), O(logn)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, q;
        cin >> n >> q;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll sum = 0;
        ll even_cnt = 0;
        ll even_sum = 0;
        ll odd_cnt = 0;
        ll odd_sum = 0;
        for (int i = 0; i < n; i++) {
            sum += v[i];
            if (v[i] % 2 == 0) {
                even_cnt++;
                even_sum += v[i];
            }
            if (v[i] % 2 != 0) {
                odd_cnt++;
                odd_sum += v[i];
            }
        }
        while (q--) {
            int even, val;
            cin >> even >> val;
            if (even == 0) {
                if (val % 2 == 0) {
                    even_sum += val * even_cnt;
                    sum += val * even_cnt;
                    cout << sum << '\n';
                } else {
                    odd_sum += val * even_cnt;
                    sum += val * even_cnt;
                    odd_cnt += even_cnt;
                    even_cnt = 0;
                    even_sum = 0;
                    cout << sum << '\n';
                }
            } else {
                if (val % 2 == 0) {
                    odd_sum += val * odd_cnt;
                    sum += val * odd_cnt;
                    cout << sum << '\n';
                } else {
                    even_sum += val * odd_cnt;
                    sum += val * odd_cnt;
                    even_cnt += odd_cnt;
                    odd_cnt = 0;
                    odd_sum = 0;
                    cout << sum << '\n';
                }
            }
        }
    }
}
// ================= Notes ================= //
/*
 *
 */

























