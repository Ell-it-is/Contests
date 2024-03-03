// time-limit: 1000
// problem-url: https://codeforces.com/contest/1863/problem/B
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
// tc: 1
// n: 100000
// time(s): 1
// order: O(1), O(logn), O(n), O(nlogn)
// ================= Solution ================= //

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
      cin >> p[i];
    }
    bool ascending = true;
    for (int i = 1; i < n; i++) {
      if (p[i] <= p[i - 1]) ascending = false;
    }
    if (ascending) {
      cout << 0 << '\n';
      continue;
    }
    int cnt = -1;
    int f = 1; // current not fixed
    map<int, int> map;
    for (int i = 0; i < n; i++) {
      map[p[i]] = i;
    }
    // count how many times can you look for (f + 1)
    while (f <= n) {
      cnt++;
      while (map[f + 1] > map[f]) {
        f++;
      }
      f++;
    }
    cout << cnt << '\n';
  }
}
// ================= Notes ==================== //
/*
	  brute force picking x as 2...n, check at each turn if p is 1...n
	  split sort: pick all elements < x and put them in order to new array
	              pick all elements >= x and put them in order to new array

	  hold information about the last position that is not fixed
	  then look how many times is there one bigger right from that not-fixed number -> that is the x to choose
*/
// ================= Thoughts ================= //
/*
    
*/

















