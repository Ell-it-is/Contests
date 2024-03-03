// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc318/tasks/abc318_b
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
  //cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector< pair< pair<int, int>, pair<int, int> > > v(n);
    int max_b = 0;
    int max_d = 0;
    for (int i = 0; i < n; i++) {
      int a, b, c, d;
      cin >> a >> b >> c >> d;
      v[i] = { {a, b}, {c, d} };
      max_b = std::max(max_b, b);
      max_d = std::max(max_d, d);
    }
    vector<vector<int>> p(max_b, vector<int>(max_d, 0));
    for (int i = 0; i < n; i++) {
      int a = v[i].first.first;
      int b = v[i].first.second;
      int c = v[i].second.first;
      int d = v[i].second.second;
      for (int j = a; j < b; j++) {
        for (int k = c; k < d; k++) {
          p[j][k] = 1;
        }
      }
    }
    int cnt = 0;
    for (int i = 0; i < max_b; i++) {
      for (int j = 0; j < max_d; j++) {
        if (p[i][j] == 1) cnt++;
      }
    }
    cout << cnt << '\n';
  }
}
// ================= Notes ==================== //
/*
	  
*/
// ================= Thoughts ================= //
/*
    
*/

















