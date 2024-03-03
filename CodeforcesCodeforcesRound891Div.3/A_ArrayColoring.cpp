// time-limit: 1000
// problem-url: https://codeforces.com/contest/1857/problem/A
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

// ================= Solution ================= //


int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int odd_cnt = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] % 2) odd_cnt++;
    }
    if (odd_cnt % 2) {
      cout << "NO" << '\n'; 
    } else {
      cout << "YES" << '\n';
    }
  }
}
// ================= Notes ==================== //
/*
	  sum odd / even number of even numbers = even
	  sum even number of odd numbers = even
	  sum odd number of odd numbers = odd

	  even + even = even
	  odd + odd = even
	  even + odd = odd

	  if there is even number of odd numbers -> they have even sum = parity of even numbers -> yes
	  if there is odd number of odd numbers -> odd sum, How can I change it to even sum?
	  I must take away multiples of two odd numbers (to get even sums) and add that to color of even numbers to keep parity of even,
	  But if I do that, I haven't changed the parity of odd's, so nothing changes and if I only take 1, 3, 5, ... odds from odd I do change
	  parity of odds but I also change parity of evens -> Impossible to get same parity -> no
*/
// ================= Thoughts ================= //
/*
    
*/

















