// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc317/tasks/abc317_c
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
    map<int, int> map;
    for (int i = 0; i < m; i++) {
      int x, y, c;
      cin >> x >> y >> c;
      pair<int, int> p = {x, y};
      if (p.first > p.second) {
        std::swap(p.first, p.second);
      }
      if (map.find(p.first) != map.end()) {
        int cur = map[p.first];
        if (c > cur) {
          map[p.first] = c;
        }
      } else {
        map[p.first] = c;
      }
      if (map.find(p.second) != map.end()) {
        int cur = map[p.second];
        if (c > cur) {
          map[p.second] = c;
        }
      } else {
        map[p.second] = c;
      }
    }
    db(map);
    int sum = 0;
    for (auto&& [key, val] : map) {
      sum += val;
    }
    cout << sum << '\n';
  }
}
// ================= Notes ==================== //
/*
	  I cannot pass the same town twice
	    - you cannot turn back -> need to start at vertex with least amount of edges?
	  I must maximize the total travel distance
	    - addition is commutative -> all you need is to find correct route and sum distances

	  Actually all I need to know is, whether it's possible, it is always possible from the statement, so all I need is to sum the distances and not look for path.
	  Every time I use a vertex, I should remove it's egdes as to note that there exists no way back

	  Possible solution:
	  Start from vertex with least amount of edges
	  Once you access vertex - remove it and it's roads
*/
// ================= Thoughts ================= //
/*
    
*/

















