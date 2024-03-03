// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc228/tasks/abc228_a
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
int catalan(int n, std::map<int, int> &mem) {
  if (n <= 1) return 1;
  if (mem[n]) return mem[n];
  int res = 0;
  for (int i = 0; i < n; i++) {
    res += catalan(i, mem) * catalan(n - i - 1, mem);
  }
  mem[n] = res;
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    /*std::map<int, int> mem;
    mem[0] = 1;
    mem[1] = 1;
    cout << catalan(n, mem) << "\n";*/

    vector<int> dp(n + 1);
    dp[0] = 1;
    dp[1] = 1;
    // for each catalan number 2...n
    for (int i = 2; i <= n; i++) {
      // go through all previous catalan numbers 0...i-1
      for (int j = 0; j < i; j++) {
        // say that the value of i-th catalan number is the sum of
        // multiples of previous catalan values at opposite ends
        dp[i] += dp[j] * dp[i - j - 1];
        db(j, i - j - 1);
      }
    }
    cout << dp[n] << "\n";
  }
}
// ================= Notes ==================== //


























