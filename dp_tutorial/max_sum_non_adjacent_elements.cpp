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
int f(int i, vector<int> &v) {
  if (i < 0) return 0;
  if (i == 0) return v[0];
  return v[i] + f(i - 2, v);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    vector<int> v { 4, -6, -8, 10, -5, -9 };
    int n = 6;
    /*int max = INT_MIN;
    for (int i = n - 1; i >= 0; i--) {
      int cur = f(i, v);
      max = std::max(max, cur);
    }
    cout << max << "\n";*/

    vector<int> dp(n);
    dp[0] = v[0];
    dp[1] = v[1];
    for (int i = 2; i < n; i++) {
      dp[i] = dp[i - 2] + v[i];
    }
    cout << dp[n - 1] << "\n";
  }
}
// ================= Notes ==================== //
/*
    Print all subsequences -> (pick - non-pick) technique
*/

