// time-limit: 1000
// problem-url: https://codeforces.com/contest/1836/problem/B
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
        ll n, k, g;
        cin >> n >> k >> g;
		if (g == 2) {
			cout << 0 << '\n'; 
			continue;
		}
        ll m = g % 2 == 0 ? g / 2 : g / 2 + 1;
        ll d = m - 1;
        ll sum = k * g;
		ll x = std::min((n - 1) * d, (sum / d) * d);
		ll ans = x;
		ll left = sum - x;
		ll r = left % g;
		if (r >= m)  {
			ans -= (left + (g - r)) - left;  
		} else {
			ans += left - (left - r);
		}
        cout << ans << '\n';
    }
}
// ================= Notes ================= //
/*
 *  n - ppl
 *  k - gold coins
 *  g - silver coins / gold coin
 *  k * g - sum of silver coins
 *
 *  I need to distribute (k * g silver coins) / (n ppl)
 *  such that I save as many silver coins as possible.
 *
 *  Note that:
 *  sum is always <= (k * g) at the start
 *  but we want to minimize this value using rounding
 *
 *  Rounding:
 *  If I give person 0 -> Person gets 0 -> Company gets 0
 *  If I give person (m < g / 2) -> Person gets 0 coins -> Company saves g / 2 coins
 *  (Most I can save as a company)
 *  
 *  g: 14
 *  x: 5
 *  2) 5 - 5 = 0
 *  
 *  x: 7
 *  1) 7 + (14 - 7) = 14
 *
 *  x: 9
 *  1) 9 + (14 - 9) = 14
 *
 *  x: 14
 *  2) 14 - 0 = 14 
 *
 *  x: 20
 *  2) 20 - 6 = 14
 *
 *  x: 21
 *  1) 21 + (14 - 7) = 28
 *
 *  x: 22
 *  1) 22 + (14 - 8) 28
 *
 *  x: 28
 *  2) 28 - 0 = 28
 *
 *  x: 29
 *  2) 29 - 1 = 28
 */

























