// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1359/A

// ================= Header ================= //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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
#ifdef DEBUG
#define db(x...) cerr << "\e[91m"<<__func__<<":"<<__LINE__<<" [" << #x << "] = ["; _print(x); cerr << "\e[39m" << endl;
#else
#define db(x...)
#endif

const int MOD = 1000000007;

// ================= Order ================= //

// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
	    int n, m, k;
        cin >> n >> m >> k;
        int x = 0; // number of jokers in winners hand
        int y = 0; // max number of jokers in second winners hand
        int ans = 0; // x - y points for player that could get max points
        if (m <= n / k) {
            cout << m << '\n';
        } else {
            // place all the cards you can into one players hand
            m -= n / k;
            // how many cards must be distributed amongst (n - 1) players?
            if (m % (k - 1) == 0) {
                cout << (n / k) - (m / (k - 1)) << '\n';
            } else {
                cout << (n / k) - (m / (k - 1) + 1) << '\n';
            }
        }
    }
}
// ================= Notes ================= //
/*
*   optimal: m <= (n / k) -> ans: m
*
*/
