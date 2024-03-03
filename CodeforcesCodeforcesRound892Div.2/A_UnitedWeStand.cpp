// time-limit: 1000
// problem-url: https://codeforces.com/contest/1859/problem/A
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
// tc: 500
// n: 100
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    bool all_equal = true;
    for (int i = 1; i < n; i++) {
      if (a[i] != a[0]) {
        all_equal = false;
        break;
      }
    }

    if (all_equal) {
      cout << -1 << '\n';
      continue;
    }
    vector<int> b;
    vector<int> c;
    int last = a.back();
    for (int i = n - 1; i >= 0; i--) {
      if (a[i] == last) {
        c.push_back(a[i]);
      } else break;
    }
    for (int i = 0; i < n; i++) {
      if (a[i] != last) {
        b.push_back(a[i]);
      } else break;
    }
    cout << (int) b.size() << " " << (int) c.size();
    cout << '\n';
    for (int x : b) {
      cout << x << " ";
    }
    cout << '\n';
    for (int x : c) {
      cout << x << " ";
    }
    cout << '\n';
  }
}
// ================= Notes ==================== //
/*
    0 4
    0 1 2 3 4

	c[j] is not a divisor of b[i] 
    it must be true that b[i] % c[j] != 0

    b[i] < c[j] || c[j] is not a multiple of b[i]

    6 % 3 -> 0, not ok
    6 % 6 -> 0, not ok
    3 % 6 -> 3, ok (3 < 6)
    6 % 5 -> 1, ok (5 is not a multiple of 6)
    
*/


















