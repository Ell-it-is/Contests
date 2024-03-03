// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1476/A

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
// tc: 1000
// n: 1000000000
// time(s): 1
// order: O(1), O(logn)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        ll n, k;
        cin >> n >> k;
        ll max = 0;
        ll sum = 0;
        if (n <= k) {
            sum = k;
            if (sum % n == 0) {
                max = sum / n;
            } else {
                max = sum / n + 1;
            }
        }
        if (n > k) {
            if (n % k == 0) {
                max = 1;
            } else {
                max = 2;
            }
        }
        cout << max << '\n';
    }
}
// ================= Notes ================= //
/*
*   I must create array, where
*       arr.size = n
*       a[i] > 0
*       max(arr) is minimized
*       k | sum(arr)
*
*   Answer: max(arr)
*
*   Observations:
*   - to minimize max is to minimize each element, such that this is still true ->
*       - the sum(arr) >= k, for k | sum(arr)
*/
