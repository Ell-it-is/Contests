// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/556/A
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
// time(s): 1
// order: O(1), O(logn), O(n), O(nlogn)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt1 = 0;
        int cnt0 = 0;
        for (char c : s) {
            if (c == '0') cnt0++;
            if (c == '1') cnt1++;
        }
        int ans = 0;
        if (cnt0 == 0 || cnt1 == 0) {
            ans = n;
        }
        if (cnt0 == cnt1) {
            ans = 0;
        }
        if (cnt0 > cnt1) {
            ans = cnt0 - cnt1;
        }
        if (cnt1 > cnt0) {
            ans = cnt1 - cnt0;
        }
        cout << ans << '\n';
    }
}
// ================= Notes ================= //
/*
 *  I can remove:
 *  01 OR 10
 *
 *  If we have a string of strictly 1's or 0's, we cannot remove anything
 *  If we have a string of same number of 1's and 0's, we can remove all
 *  If we have more 1's or 0's, then those that cannot be matched will remain
 *
 *  
 */

























