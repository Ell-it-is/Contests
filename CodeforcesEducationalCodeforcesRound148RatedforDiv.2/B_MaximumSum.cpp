// time-limit: 2000
// problem-url: https://codeforces.com/contest/1832/problem/B
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
// tc: 1
// n: 200000
// time(s): 2
// order: O(1), O(logn), O(n), O(nlogn)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        std::sort(v.begin(), v.end());
        ll ans = 0;
        vector<ll> s(n + 1);
        for (int i = 0; i < n; i++) {
            s[i + 1] = s[i] + v[i];
        }
        /*
         * Iterates through all the possible choices of taking max and min elements,
         * then it calculates the remaining sum (from prefix sum)
         * and takes the maximum possible sum
         */
        for (int i = 0; i <= k; i++) {
            ans = std::max(ans, s[n - (k - i)] - s[2 * i]);
        }
        cout << ans << '\n';
    }
}
// ================= Notes ================= //
/*
 *  n positive unique integers
 *  k times I do either:
 *      pick 1 max -> delete
 *      pick 2 min -> delete
 *
 *  Ans: maximize the sum
 *
 *  K = 2
 *  when I removed 2 max AND 0 min
 *  when I removed 1 max AND 2 min
 *  when I removed 0 max AND 4 min
 *
 *  K = 3
 *  when I removed 3 max AND 0 min
 *  when I removed 2 max AND 2 min
 *  when I removed 1 max AND 4 min
 *  when I removed 0 max AND 6 min
 */
