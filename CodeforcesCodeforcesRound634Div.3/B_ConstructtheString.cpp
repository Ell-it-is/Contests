// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1335/B
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
// n: 2000
// time(s): 2
// order: O(1), O(logn), O(n), O(nlogn), O(n^2)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s = ""; // must have length n
        // a <= n, that means there is at least 1 substring A in string S
        string sub = "";
        for (int i = (int)'a'; i < (int)'a' + b; i++) {
            sub += char(i);
        }
        for (int i = 0; i < a - b; i++) {
            sub += sub.back();
        }
        for (int i = 0; i < n / a; i++) {
            s += sub;
        }
        int i = 0;
        while ((int)s.size() < n) {
            s += sub[i++];
        }
        cout << s << '\n';
    }
}
// ================= Notes ================= //
/*
 *  substr of length A -> has exactly B distinct char's
 *
 *  I don't care about which char's those are, I can use: a, b, c, ..., z
 *
 *  n: 7, a: 5, b: 3
 *  a b c c c a b
 *
 *  n: 9, a: 5, b: 3
 *  a b c c c a b c c
 *
 *  n: 9, a: 5, b: 4
 *  a b c d d a b c d
 *
 *  n: 7, a: 3, b: 3
 *  a b c a b c a
 */

























