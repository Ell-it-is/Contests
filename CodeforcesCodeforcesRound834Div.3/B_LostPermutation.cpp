// time-limit: 1000
// problem-url: https://codeforces.com/contest/1759/problem/B
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
        ll m, s;
        cin >> m >> s;
        vector<ll> v(m);
        unordered_set<ll> set;
        for (int i = 0; i < m; i++) {
            cin >> v[i];
            set.insert(v[i]);
        }
        ll sum_missing = 0;
        ll max = *std::max_element(v.begin(), v.end());
        for (int i = 1; i <= max; i++) {
            if (set.count(i) == 0) {
                sum_missing += i;
            }
        }
        string ans = "";
        if (s < sum_missing) {
            ans = "NO";
        } else {
            s -= sum_missing;
            ll x = max + 1;
            while (s - x >= 0) {
                s -= x;
                x++;
            }
            if (s) {
                ans = "NO";
            } else {
                ans = "YES";
            }
        }
        cout << ans << '\n';
    }
}
// ================= Notes ================= //
/*
 *   arr: 1 2 3 4 5 6
 *   pre: 1 3 6 10 15 21
 */
