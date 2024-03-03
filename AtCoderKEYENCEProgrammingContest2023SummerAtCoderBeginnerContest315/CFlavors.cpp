// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc315/tasks/abc315_c
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
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;
      v[i] = {a, b};
    }
    std::sort(v.begin(), v.end(), [](auto &left, auto &right) {
      return (left.second != right.second ? left.second > right.second : left.first < right.first);
    });
    int first = v[0].second;
    int second = v[1].second;
    if ((n <= 2) || (v[0].first != v[1].first)) {
      if (v[0].first == v[1].first) {
        cout << first + second / 2 << '\n';
      } else {
        cout << first + second << '\n';
      }
    } else {
      int third = 0;
      for (int i = 0; i < n; i++) {
        if (v[i].first != v[0].first) {
          third = v[i].second;
          break;
        }
      }
      int ans1 = first + second / 2;
      int ans2 = first + third;
      int ans = std::max(ans1, ans2);
      cout << ans << '\n';
    }
  }
}
// ================= Notes ==================== //
/*
	  I believe I have to find 2 biggest deliciousness of same flavor and of different flavor, then compare them
	  In case of same flower - half the smaller number

	  If first and second biggest are different -> thats the answer
	  If first and second biggest are same -> look for first different from them and compare with it (pair with first biggest)
	  
*/
// ================= Thoughts ================= //
/*
    
*/

















