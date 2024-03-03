// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc229/tasks/abc229_b
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
    string a, b;
    cin >> a >> b;
    int n = std::min((int) a.size(), (int) b.size());
    int shift = std::max((int) a.size(), (int) b.size()) - n;
    bool ans = true; // true - false
    for (int i = n - 1; i >= 0; i--) {
      // shift index of bigger number by 'shift'
      int x = (int) a.size() > (int) b.size() ? a[i + shift] - '0' : a[i] - '0';
      int y = (int) b.size() > (int) a.size() ? b[i + shift] - '0' : b[i] - '0';
      if (x + y >= 10) {
        ans = false;
        break;
      }
    }
    cout << (ans ? "Easy" : "Hard") << '\n';
  }
}
// ================= Notes ==================== //
/*
	  
*/
// ================= Thoughts ================= //
/*
    
*/

















