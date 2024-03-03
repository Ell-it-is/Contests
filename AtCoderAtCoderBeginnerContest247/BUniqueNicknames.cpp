// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc247/tasks/abc247_b
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
    //cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<pair<string, string>> v(n);
        multiset<string> mset;
        for (int i = 0; i < n; i++) {
            string s, t;
            cin >> s >> t;
            mset.insert(s);
            mset.insert(t);
            v[i] = {s, t};
        }
        bool ans = true;
        for (int i = 0; i < n; i++) {
            mset.erase(mset.find(v[i].first));
            mset.erase(mset.find(v[i].second));
            if (mset.count(v[i].first) > 0 && mset.count(v[i].second) > 0) {
                ans = false;
                break;
            }
            mset.insert(v[i].first);
            mset.insert(v[i].second);
        }
        cout << (ans ? "Yes" : "No") << '\n';
    }
}
// ================= Notes ================= //
/*
 *
 */

























