// time-limit: 1000
// problem-url: https://codeforces.com/contest/1848/problem/B
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
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
      cin >> c[i];
    }
    set<int> distinct; // set of distinct colors
    for (int color : c) {
      distinct.insert(color);
    }
    map<int, vector<int>> map;
    for (int i = 0; i < n; i++) {
      map[c[i]].push_back(i);
    }
    vector<int> color_gaps;
    for (int color : distinct) {
      int max = INT_MIN;
      int s_max = INT_MIN;
      // find the gap between first color and beggining + last color and end
      max = std::max(map[color].front(), n - map[color].back() - 1);
      s_max = std::min(map[color].front(), n - map[color].back() - 1);
      // find the remaining gaps in between first and last
      for (int i = 1; i < (int) map[color].size(); i++) {
        int dist = map[color][i] - map[color][i - 1] - 1;
        if (dist >= max) {
          int temp = max;
          max = dist;
          s_max = temp;
        } else if (dist > s_max) {
          s_max = dist;
        }
      }
      // compare second max with max that is divided by painting plank in between
      color_gaps.push_back(std::max(max / 2, s_max));
    }
    int min = *std::min_element(color_gaps.begin(), color_gaps.end());
    cout << min << '\n';
  }
}
// ================= Notes ==================== //
/*
	  all colors the same -> no need to repaint
	  
*/
// ================= Thoughts ================= //
/*
    First try: Solved exactly as in editorial but unable to implement...
    Next day: Got it!
*/

















