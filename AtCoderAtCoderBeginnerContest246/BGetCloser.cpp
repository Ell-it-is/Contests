// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc246/tasks/abc246_b
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
        int a, b;
        cin >> a >> b;
        double x = 0.0;
        double y = 0.0;
        cout << setprecision(12) << fixed << '\n';
        if (a > 0 && b == 0) {
            x = 1.0;
            cout << x << " " << y << '\n';
        }
        else if (a == 0 && b > 0) {
            y = 1.0;
            cout << x << " " << y << '\n';
        } else {
            // first find the angle of the big triangle (a, b)
            double c = std::sqrt(a*a + b*b);
            double angle_a = std::asin(a / c) * 180 / PI;
            // find the x and y with diagonal of 1
            y = std::sin(angle_a * PI / 180);
            x = std::sqrt(1 - y*y);
            cout << y << " " << x << '\n';
        }
    }
}
// ================= Notes ================= //
/*
 *
 */

























