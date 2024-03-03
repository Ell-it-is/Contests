// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc255/tasks/abc255_b
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
double dist(int x, int y, int p, int q) {
    return std::sqrt((double)std::pow(std::abs(p - x), 2) + std::pow(std::abs(y - q), 2));
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        // find distance for all the people without torch
        // to their closest person with torch
        // max(distances) is the min radius I need so that light reaches everyone
        set<int> c;
        for (int i = 0; i < k; i++) {
            int val;
            cin >> val;
            c.insert(--val);
        }
        vector<pair<int, int>> a; // torch
        vector<pair<int, int>> b; // no torch
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            if (c.find(i) != c.end()) {
                a.push_back({x, y});
            } else {
                b.push_back({x, y});
            }
        }
        vector<double> closest;
        for (int i = 0; i < (int)b.size(); i++) {
            double min_d = DBL_MAX;
            for (int j = 0; j < (int)a.size(); j++) {
                double d = dist(b[i].first, b[i].second, a[j].first, a[j].second);
                min_d = std::min(min_d, d);
            }
            closest.push_back(min_d);
        }
        double max_d = DBL_MIN;
        for (double d : closest) {
            max_d = std::max(max_d, d);
        }
        std::cout << std::fixed;
        std::cout << std::setprecision(6) << max_d << '\n';
    }
}
// ================= Notes ================= //
/*
 *
 */

























