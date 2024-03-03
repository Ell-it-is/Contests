// time-limit: 2000
// problem-url: https://codeforces.com/contest/1851/problem/A
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
    int n, m, k, H;
    cin >> n >> m >> k >> H;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
      cin >> h[i];
    }
    int cnt = 0; // ppl he can talk to
    if (m == 1) {
      cout << cnt << '\n';
      continue;
    }
    int min_diff = 2 * k - k;
    int max_diff = m * k - k;
    for (int i = 0; i < n; i++) {
      int diff = std::abs(H - h[i]);
      if (diff % k == 0 && diff >= min_diff && diff <= max_diff) cnt++;
    }
    cout << cnt << '\n';
  }
}
// ================= Notes ==================== //
/*
	  So for each person I must say whether there exists a situation in which they are facing each other
	  The height diff must be a multiple of k
*/
// ================= Thoughts ================= //
/*
    
*/

















