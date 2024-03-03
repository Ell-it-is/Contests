// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc319/tasks/abc319_c
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
    int total = 16;
    int n = 3;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
      string row = "";
      for (int j = 0; j < n; j++) {
        string s;
        cin >> s;
        row += s;
      }
      v[i] = row;
    }
    int cnt = 0; // count how many times he is dissapointed
    // check horizontally
    for (int i = 0; i < n; i++) {
      string s = v[i];
      if (s[0] == s[1] && s[2] != s[0]) {
        cnt++;
      }
      if (s[2] == s[1] && s[0] != s[2]) {
        cnt++;
      }
    }
    // check vertically
    string a = v[0];
    string b = v[1];
    string c = v[2];
    for (int j = 0; j < n; j++) {
      if (a[j] == b[j] && c[j] != a[j]) {
        cnt++;
      }
      if (c[j] == b[j] && a[j] != c[j]) {
        cnt++;
      }
    }
    // check main diagonal
    if (a[0] == b[1] && c[2] != a[0]) {
      cnt++;
    }
    if (c[2] == b[1] && a[0] != c[2]) {
      cnt++;
    }
    // check anti diagonal
    if (c[0] == b[1] && a[2] != c[0]) {
      cnt++;
    }
    if (a[2] == b[1] && c[0] != a[2]) {
      cnt++;
    }
    db(cnt);
    double chance = 1.0 * cnt / total;
    cout << fixed << setprecision(8);
    cout << chance << '\n';
  }
}
// ================= Notes ==================== //
/*
	  P = (the number of options Takahashi can get dissapointed) / (the number of options)

	  6 options horizontally
	  6 options vertically
	  2 options on main-diagonal
	  2 options on anti-main-diagonal
	  16 total options
*/
// ================= Thoughts ================= //
/*
    
*/

















