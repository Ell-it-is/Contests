// time-limit: 1000
// problem-url: https://codeforces.com/contest/1872/problem/D
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

// ================= Order ==================== //
// tc: 10000
// n: 10000000000
// time(s): 1
// order: O(1), O(logn)
// ================= Solution ================= //


int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    ll n, x, y;
    cin >> n >> x >> y;
    ll cnt_x = n / x; // count of positions divisible by x
    ll cnt_y = n / y; // count of positions divisible by y
    ll lcm = std::lcm(x, y);
    ll both = n / lcm;
    cnt_x -= both;
    cnt_y -= both;
    db(cnt_x);
    db(cnt_y);
    // sum of first cnt_y smallest numbers -> 1...cnt_y
    ll sum_small = 1ll * (cnt_y) * (cnt_y + 1) / 2;
    ll r = n - cnt_x;
    ll sum_big = (1ll * (n) * (n + 1) / 2) - (1ll * (r) * (r + 1) / 2);
    db(sum_small);
    db(r);
    db(sum_big);
    cout << sum_big - sum_small << '\n';
  }
}
// ================= Notes ==================== //
/*
	  Put the highest numbers on positions divisible by x
	  Put the smallest numbers on positions divisible by y
	  
*/
// ================= Thoughts ================= //
/*
    
*/

















