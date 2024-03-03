// time-limit: 2000
// problem-url: https://codeforces.com/contest/1798/problem/A
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
    int n;
    cin >> n;
    vector<int> a(n);
    int m1 = INT_MIN;
    int p1 = -1;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] > m1) {
        m1 = a[i];
        p1 = i;
      }
    }
    int m2 = INT_MIN;
    int p2 = -1;
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
      cin >> b[i];
      if (b[i] > m2) {
        m2 = b[i];
        p2 = i;
      }
    }
    if (p1 == n && p2 == n) {
      cout << "Yes" << '\n';
      continue;
    }
    bool ans = true;
    for (int i = 0; i < n - 1; i++) {
      if (a[i] > a[n - 1]) {
        if (b[i] <= a[n - 1] && a[i] <= b[n - 1]) {
          int temp = a[i];
          a[i] = b[i];
          b[i] = temp;
        } else {
          ans = false;
          break;
        }
      }
    }
    for (int i = 0; i < n - 1; i++) {
      if (b[i] > b[n - 1]) {
        if (a[i] <= b[n - 1] && b[i] <= a[n - 1]) {
          int temp = b[i];
          b[i] = a[i];
          a[i] = temp;
        } else {
          ans = false;
          break;
        }
      }
    }
    cout << (ans ? "Yes" : "No") << '\n';
  }
}
// ================= Notes ==================== //
/*
  I need all elements in v[0]....v[n - 2] <= v[n - 1]
*/


















