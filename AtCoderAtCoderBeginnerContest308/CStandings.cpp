// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc308/tasks/abc308_c
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
const double PI = 3.14159265359;

// ================= Order ================= //

// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<pair<int, int>> ab;
        for(int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            ab.emplace_back(a, a + b);
        }
        vector<int> p(n);
        iota(p.begin(), p.end(), 0);
        auto f = [&](int i, int j) {
            auto [ai, aj] = ab[i];
            auto [bi, bj] = ab[j];
            return (long long)ai * bj > (long long)aj * bi;
        };
        std::stable_sort(p.begin(), p.end(), f);
        for(int i = 0; i < n; i++) cout << p[i] + 1 << " \n"[i == n - 1];
    }
}
// ================= Notes ================= //
/*
 *  1) sort in desc
 *  2) if you see equal values -> sort that segment asc
 */

























