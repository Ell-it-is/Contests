// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1055/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

// Constants
const int mod = 1e9+7;
const int mx = numeric_limits<int>::max();
const int mn = numeric_limits<int>::min();
const ll mxl = numeric_limits<ll>::max();
const ll mnl = numeric_limits<ll>::min();
const double mxd = numeric_limits<double>::max();
const double mnd = numeric_limits<double>::min();

// Macro hack
#define GET_MACRO(_0, _1, _2, _3, _4, _5, NAME, ...) NAME
#define read(...) GET_MACRO(_0, ##__VA_ARGS__, read5, read4, read3, read2, read1, read0)(__VA_ARGS__)

#define GET_MACRO1(_0, _1, _2, NAME, ...) NAME
#define rep(...) GET_MACRO1(_0, ##__VA_ARGS__, rep2, rep1, rep0)(__VA_ARGS__)

#define GET_MACRO2(_0, _1, _2, NAME, ...) NAME
#define go(...) GET_MACRO2(_0, ##__VA_ARGS__, go2, go1, go0)(__VA_ARGS__)

#define GET_MACRO3(_0, _1, _2, NAME, ...) NAME
#define gob(...) GET_MACRO3(_0, ##__VA_ARGS__, gob2, gob1, gob0)(__VA_ARGS__)

// Loops
#define rep1(n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 0; i < n; i++)
#define go1(from, to) for (int i = from; i < to; i++)
#define go2(i, from, to) for (int i = from; i < to; i++)
#define gob1(from, to) for (int i = from - 1; i >= to; i--)
#define gob2(i, from, to) for (int i = from - 1; i >= to; i--)
#define each(a, x) for (auto& a : x)

// Input
#define read1(a) int a; cin >> a;
#define read2(T, a) T a; cin >> a;
#define read3(T, a, b) T a, b; cin >> a >> b;
#define read4(T, a, b, c) T a, b, c; cin >> a >> b >> c;
#define read5(T, a, b, c, d) T a, b, c, d; cin >> a >> b >> c >> d;


// Shortcuts
#define pb push_back
#define pob pop_back
#define ins insert
#define lb lower_bound
#define ub upper_bound
#define acc accumulate
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

// Data structures
template<class T> using V = vector<T>;
template<class T> using S = set<T>;
template<class T> using MS = multiset<T>;
template<class T, class U> using M = map<T, U>;
template<class T, class U> using MM = multimap<T, U>;
template<class T, int U> using A = array<T, U>;

// Pairs
#define pi pair<int, int>
#define ps pair<string, string>
#define pl pair<ll, ll>
#define pd pair<double, double>

#define Vi V<int>
#define Vii V<pi>
#define Vs V<string>
#define Vss V<ps>
#define Vl V<ll>
#define Vll V<pl>
#define Vd V<double>
#define Vdd V<pd>


// Integers
template<class T> bool odd(T x) { return x % 2 != 0; }
template<class T> bool even(T x) { return x % 2 == 0; }
template<class T> T parity(T x) { return x % 2; }
template<class T> T pairs_of(T n) { return n * (n - 1) / 2; }
template<class T> T sum_of(T n) { return n * (n + 1) / 2; }
template<class T> T sum_of_sq(T n) { return n * (n + 1) * (2 * n + 1) / 6; }
template<class T> T dist(T l, T r) { return r - l; }
template<class T> T dist_excl(T l, T r) { return r - l - 1; }
template<class T> T dist_incl(T l, T r) { return r - l + 1; }
template<class T> T avg(T a, T b) { return (a + b) / 2; }


// Vector
template<class T> T min_pos(const V<T> &v) {
  return min_element(all(v)) - v.begin();
}

template<class T> T min_val(const V<T> &v) {
  return *min_element(all(v));
}

template<class T> T max_pos(const V<T> &v) {
  return max_element(all(v)) - v.begin();
}

template<class T> T max_val(const V<T> &v) {
  return *max_element(all(v));
}

template<class T> T get_avg(const V<T> &v) {
  T n = size(v);
  T sum = acc(all(v), T(0));
  return sum / n;
}

template<class T> int get_unique(T &v) {
  sort(all(v));
  v.resize(unique(all(v)) - v.begin());
  return size(v);
}

template<class T> void lrot(const T &v) {
  std::rotate(v.begin(), v.begin() + 1, v.end());
}

template<class T> void rrot(const T &v) {
  std::rotate(v.rbegin(), v.rbegin() + 1, v.rend());
}

template<class T> T right(const T &v, int index) {
  if (index >= size(v)) return -1;
  return v[size(v) - 1 - index];
}

template<class T> void in(T &v) {
  rep(size(v)) {
    cin >> v[i];
  }
}

template<class T>
void out(T &v, bool line = false) {
  rep(size(v)) {
    cout << v[i];
    if (!line) cout << " ";
    if (line) cout << "\n";
  }
}


// 2D vector
template<class T> pi get_dimensions(V<V<T>> &t) {
  //pi dimensions = {0, 0};
  if ((int) t.size() == 0) return { 0, 0 };
  int n = (int) t.size();
  int m = (int) t[0].size();
  return { n, m };
}

template<class T, class U>
bool check_bounds(T &t, U x, U y) {
  auto [n, m] = get_dimensions(t);
  if (n == 0) return false;

  return (x >= 0 && x < n && y >= 0 && y < m);
}

template<class T> void in(V<V<T>> &t) {
  auto [n, m] = get_dimensions(t);
  rep(n) {
    rep(j, m) {
      cin >> t[i][j];
    }
  }
}

template<class T>
void out(V<V<T>> &t) {
  auto [n, m] = get_dimensions(t);
  rep(n) {
    rep(j, m) {
      cout << t[i][j];
    }
    cout << "\n";
  }
}

// Map


#ifdef DEBUG
#include "../template/debug.h"
#else
#define __DEBUG__(x...)
#endif

int solve();

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  
  int tt = 1;
  //std::cin >> tt;
  bool lowercase = false;
  bool show_time = false;
  
  auto start_time = std::chrono::high_resolution_clock::now();
  auto prev_time = start_time;
  while (tt--) {
    int solution = solve();
    if (solution == 1) std::cout << (lowercase ? "Yes" : "YES");
    if (solution == 0) std::cout << (lowercase ? "No" : "NO");
    std::cout << "\n";
    
    if (show_time) {
      auto end_time = std::chrono::high_resolution_clock::now();
      double time_taken = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - prev_time).count();
      time_taken *= 1e-9;
    
      std::cout << "time = " << std::fixed << std::setprecision(9) << time_taken << "s" << std::endl; 
      prev_time = end_time;
    }
  }

  return 0;
}


int solve() {
  
  
  return 42;
}

/* ================= Notes ================== //
   
*/


















