// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1473/B

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
// tc: 2000
// n: 20
// time(s): 2
// order: O(1), O(logn), O(n), O(nlogn)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
	    string s, t;
        cin >> s >> t;
        int n = (int)s.size();
        int m = (int)t.size();
        int lcm = std::lcm(n, m);
        string copy_s = s;
        string copy_t = t;
        for (int i = 1; i <= (lcm / n - 1); i++) {
            s.append(copy_s);
        }
        for (int i = 1; i <= (lcm / m - 1); i++) {
            t.append(copy_t);
        }
        if (s == t) {
            cout << s << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
}
// ================= Notes ================= //
/*
*   abaaba
*   ababab
*/
