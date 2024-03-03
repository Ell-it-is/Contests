// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc314/tasks/abc314_c
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
    int n, m;
	cin >> n >> m;
    string s;
    cin >> s;
    vector<int> colors(n);
    for (int i = 0; i < n; i++) {
      cin >> colors[i];
    }
    vector<vector<int>> v(m);
    for (int i = 0; i < n; i++) {
      int color = colors[i];
      v[color - 1].push_back(i);
    }
    vector<char> ans(n);
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < (int) v[i].size() - 1; j++) {
        int from = v[i][j];
        int to = v[i][j + 1];
        ans[to] = s[from];
      }
      int from = v[i][(int) v[i].size() - 1];
      int to = v[i][0];
      ans[to] = s[from];
    }
    string result = std::string(ans.begin(), ans.end());
    cout << result << '\n';
  }
}
// ================= Notes ==================== //
/*
	right shift each color
	1. find positions of each color (number)
	2. for each number: right shift characters at those positions by 1 to right
*/
// ================= Thoughts ================= //
/*
    
*/

















