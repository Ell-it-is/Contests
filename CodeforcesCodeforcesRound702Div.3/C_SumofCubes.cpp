// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1490/C

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
// tc: 100
// n: 1000000000000
// time(s): 2
// order: O(1), O(logn)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    unordered_set<ll> set;
    for (ll i = 1; i <= 10'000; i++) {
        set.insert(i*i*i);
    }
    int tt = 1;
    cin >> tt;
    while (tt--) {
        ll x;
        cin >> x;
        string ans = "NO";
        for (ll i = 1; i <= 10'000; i++) {
            ll check_b = x - (i*i*i);
            if (set.count(check_b)) {
                ans = "YES";
                break;
            }
        }
        cout << ans << '\n';
    }
}
// ================= Notes ================= //
/*
 *  Conclusion:
    In this type of questions you should always begin by applying brute force, then try to optimize it and only if nothing works
    look for some clever observation you haven't immediately seen.

*   Q: x = a^3 + b^3, where x, a, b > 0
*   How about question x = a + b?
*       - Find first such number that satisfies the condition
*
*   1: 1 + 1 = 2 -> No
*   2: 1 + 1 = 2 -> Yes
*   3: 1 + 1 = 2 -> No
*   4: 1 + 1 = 2 -> No
*   5: 1 + 1 = 2 -> No
*   6: 1 + 1 = 2 -> No
*   7: 1 + 1 = 2 -> No
*   8: 2^3(8) + 1^3(1) = 9 -> No
*   9: 2^3(8) + 1^3(1) = 9 -> Yes
*   10: 2^3(8) + 1^3(1) = 9 -> No
*   ...
*   -> (1, 1) 2 is the lowest sum I can get
*   -> (2, 1) 9 is the second lowest sum
*   -> (2, 2) 16 is the third lowest sum
*   -> (3, 1) 28
*   -> (3, 2) 35
*   -> (3, 3) 54
*
*   1^3 = 1
*   2^3 = 8 (diff: 7)
*   3^3 = 27 (diff: 19)
*   4^3 = 64 (diff: 37)
*   5^3 = 125 (diff: 61)
*
*   Can this idea be represented graphically?
*   - Yes, but is not very helpful
*
*/
