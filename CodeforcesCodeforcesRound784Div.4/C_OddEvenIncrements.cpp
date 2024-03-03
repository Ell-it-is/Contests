// time-limit: 1000
// problem-url: https://codeforces.com/contest/1669/problem/C
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
    bool ans = true;
    for (int i = 0; i < n; i += 2) {
      bool x = a[0] % 2 == 0;
      bool y = a[i] % 2 == 0;
      if (x == y) continue;
      ans = false;
    }
    for (int i = 1; i < n; i += 2) {
      bool x = a[1] % 2 == 0;
      bool y = a[i] % 2 == 0;
      if (x == y) continue;
      ans = false;
    }
    cout << (ans ? "YES" : "NO") << '\n';
  }
}
// ================= Notes ==================== //
/*
	  even length array has the same number of odd / even indicies
	  - even_cnt: n / 2
	  - odd_cnt: n / 2
	  odd length array has one more even index
	  - even_cnt: n / 2 + 1
	  - odd_cnt: n / 2

	  Is it possible to make the array contain only even OR only odd numbers?
	  
	  Solution:
	  - check if all numbers at even positions have the same parity AND that
	  all numbers at odd positions have the same parity -> yes
*/
// ================= Thoughts ================= //
/*
    
*/

















