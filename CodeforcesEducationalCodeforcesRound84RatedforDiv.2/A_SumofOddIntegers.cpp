// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1327/A

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
const int MX = 1'000'000;
const int MN = -1'000'000;

// ================= Order ================= //
// tc: 100000
// n: 10000000
// time(s): 2
// order: O(1), O(logn)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        ll n, k;
        cin >> n >> k;
        bool n_even = n % 2 == 0;
        bool k_even = k % 2 == 0;
        if (n_even && k_even && k * k <= n) {
            cout << "YES" << '\n';
        }
        else if (!n_even && !k_even && k * k <= n) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
}
// ================= Notes ================= //
/*
*   every even number can be represented by 2 odd numbers: (even - 1) + 1
*   sum of first n odd: n^2
*   odd + odd -> even + odd -> odd + odd -> even + odd ...
*   n: even, then number of odd numbers under it is (n / 2)
*
*   n: even k: even -> if k == 2 or k^2 <= n, then yes, else no
*   n: odd k: odd -> if k == 1(itself) or k^2 <= n, then yes, else no
*/
