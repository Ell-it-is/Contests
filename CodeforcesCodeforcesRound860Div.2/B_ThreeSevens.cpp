// time-limit: 2000
// problem-url: https://codeforces.com/contest/1798/problem/B
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
    int m;
    cin >> m;
    map<int, int> map;
    for (int j = 0; j < m; j++) {
      int n;
      cin >> n;
      for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        map[x] = j;
      }
    }
    vector<pair<int, int>> v;
    for (auto&& [key, last] : map) {
      v.push_back({last, key});
    }
    std::sort(v.begin(), v.end());
    set<int> winners;
    for (int i = 0; i < (int) v.size(); i++) {
      winners.insert(v[i].first);
    }
    if ((int) winners.size() != m) {
      cout << - 1 << '\n';
      continue;
    }
    vector<int> ans(m);
    int k = 0; // looking for k-th winner
    int i = 0;
    while (k < m && i < (int) v.size()) {
      if (k == v[i].first) {
        ans[k] = v[i].second;
        k++;
      }
      i++;
    }
    for (int x : ans) {
      cout << x << " ";
    }
    cout << '\n';
  }
}
// ================= Notes ==================== //
/*
	
*/


















