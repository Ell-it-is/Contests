// time-limit: 2000
// problem-url: https://codeforces.com/contest/1846/problem/D
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
const double PI = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899;

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
        long double n, d, h;
        cin >> n >> d >> h;
        // n - # green triangles
        // d - base
        // h - height
        // y - location of i-th triangle
        vector<long double> y(n);
        for (int i = 0; i < n; i++) {
            cin >> y[i];
        }
        long double area = d * h * 0.5;
        long double long_side = std::sqrt((d / 2.0) * (d / 2.0) + h * h);
        long double angle = std::asin(h / long_side) * 180.0 / PI;
        long double ans = 0;
        for (int i = 0; i < n - 1; i++) {
            if (std::abs(y[i + 1] - y[i]) >= h) {
                ans += area;
            } else {
                // count from bottom up the not-overlapped area
                // how many times is the lower triangle not-overlapped
                long double a = y[i + 1] - y[i];
                long double c = a / std::sin(angle * PI / 180.0);
                long double b = std::sqrt(c*c - a*a);
                long double small_triangle_area = (a * b) / 2.0;
                ans += (small_triangle_area * 2.0) + ((d - 2.0 * b) * a);
            }
        }
        ans += area;
        cout << setprecision(8) << fixed;
        cout << ans << '\n';
    }
}
// ================= Notes ================= //
/*
 *      When is triangle counted for full area?
 *      - If abs(y[i + 1] - y[i]) >= h
 *
 *      How much can they overlap?
 *      - They cannot completly overlap
 *      - At least by 1, at most by d - 1 rows
 *
 *      1) Find out in how many rows the triangle above current overlaps it?
 *         - abs(y[i + 1] - y[i]) < h  -> y[i + 1] - y[i]
 *      2) Find area of the base
 *         - (d - 1)
 *      3) combine 1) and 2)
 */

























