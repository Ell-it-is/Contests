
#include <bits/stdc++.h>
using namespace std;
using namespace std::literals;
using llong = long long;

#ifdef DEBUG
#include "../template/debug.h"
#else
#define __DEBUG__(x...)
#endif

// Constants
const int mod = 1e9+7;
const int MX = numeric_limits<int>::max();
const int MN = numeric_limits<int>::min();
const llong MXL = numeric_limits<llong>::max();
const llong MNL = numeric_limits<llong>::min();
const double MXD = numeric_limits<double>::max();
const double MND = numeric_limits<double>::min();

// Define templates
#define tcT template <class T>
#define tcTU template <class T, class U>

// Macro hack
#define OVERLOADED_MACRO(M, ...) _OVR(M, _COUNT_ARGS(__VA_ARGS__)) (__VA_ARGS__)
#define _OVR(macroName, number_of_args)   _OVR_EXPAND(macroName, number_of_args)
#define _OVR_EXPAND(macroName, number_of_args)    macroName##number_of_args

#define _COUNT_ARGS(...)  _ARG_PATTERN_MATCH(__VA_ARGS__, 9,8,7,6,5,4,3,2,1)
#define _ARG_PATTERN_MATCH(_1,_2,_3,_4,_5,_6,_7,_8,_9, N, ...)   N

// Defined Macro
#define rep(...)     OVERLOADED_MACRO(rep, __VA_ARGS__)
#define rep_back(...)     OVERLOADED_MACRO(rep_back, __VA_ARGS__)
#define go(...)     OVERLOADED_MACRO(go, __VA_ARGS__)
#define go_back(...)     OVERLOADED_MACRO(go_back, __VA_ARGS__)
#define each(...)     OVERLOADED_MACRO(each, __VA_ARGS__)
#define each_back(...)     OVERLOADED_MACRO(each_back, __VA_ARGS__)
#define each_pair(...)     OVERLOADED_MACRO(each_pair, __VA_ARGS__)
#define each_pair_back(...)     OVERLOADED_MACRO(each_pair_back, __VA_ARGS__)
#define read(...)     OVERLOADED_MACRO(read, __VA_ARGS__)
#define init(...)     OVERLOADED_MACRO(init, __VA_ARGS__)

// Loops
#define rep2(cnt, i) for (auto&& [i, pos] = std::tuple { 0, 1 }; i < cnt; i++, pos++)
#define rep1(cnt) rep2(cnt, i)

#define rep_back2(cnt, i) for (auto&& [i, pos] = std::tuple {cnt - 1, cnt}; i >= 0; i--, pos--)
#define rep_back1(cnt) rep_back2(cnt, i)

#define go5(from, to, x, val, i) if (CheckBounds(x, from) && CheckBounds(x, to) && from <= to) for (auto&& [it, val, i, pos] = std::tuple{x.begin() + from, x[from], from, from + 1}; it < x.begin() + to + 1; ++it, ++i, ++pos, val = (it < x.begin() + to + 1 ? x[i] : val))
#define go4(from, to, x, val) go5(from, to, x, val, i)
#define go3(from, to, i) for (auto&& [i, pos] = std::tuple{from, from + 1}; i <= to; i++, pos++)
#define go2(from, to) go3(from, to, i)

#define go_back5(from, to, x, val, i) if (CheckBounds(x, from) && CheckBounds(x, to) && from >= to) for (auto&& [it, val, i, pos] = std::tuple{x.begin() + from, x[from], from, from + 1}; it >= x.begin() + to; --it, --i, --pos, val = (it >= x.begin() + to ? x[i] : val))
#define go_back4(from, to, x, val) go_back5(from, to, x, val, i)
#define go_back3(from, to, i) for (auto&& [i, pos] = std::tuple{from, from + 1}; i >= to; i--, pos--)
#define go_back2(from, to) go_back3(from, to, i)

#define each3(x, val, i) if (sz(x) > 0) for (auto&& [it, val, i, pos] = std::tuple{x.begin(), *x.begin(), 0, 1}; it != x.end(); ++it, ++i, ++pos, val = (it != x.end() ? (*it) : val))
#define each2(x, val) each3(x, val, i)
#define each1(x) each3(x, val, i)

#define each_back3(x, val, i) if (sz(x) > 0) for (auto&& [it, val, i, pos] = std::tuple{x.rbegin(), *x.rbegin(), sz(x) - 1, sz(x)}; it != x.rend(); ++it, ++i, ++pos, val = (it != x.rend() ? (*it) : val))
#define each_back2(x, val) each_back3(x, val, i)
#define each_back1(x) each_back3(x, val, i)

#define each_pair4(x, key, val, i) if (sz(x) > 0) for (auto&& [it, key, val, i, pos] = std::tuple {x.begin(), x.begin()->first, x.begin()->second, 0, 1}; it != x.end(); ++it, ++i, ++pos, key = (it != x.end() ? it->first : key), val = (it != x.end() ? it->second : val))
#define each_pair3(x, key, val) each_pair4(x, key, val, i)
#define each_pair1(x) each_pair4(x, key, val, i)

#define each_pair_back4(x, key, val, i) if (sz(x) > 0) for (auto&& [it, key, val, i, pos] = std::tuple {x.rbegin(), x.rbegin()->first, x.rbegin()->second, sz(x) - 1, sz(x)}; it != x.rend(); ++it, ++i, ++pos, key = (it != x.rend() ? it->first : key), val = (it != x.rend() ? it->second : val))
#define each_pair_back3(x, key, val) each_pair_back4(x, key, val, i)
#define each_pair_back1(x) each_pair_back4(x, key, val, i)

// Input (basic types)
#define read1(a) int a; cin >> a;
#define read2(T, a) T a; cin >> a;
#define read3(T, a, b) T a, b; cin >> a >> b;
#define read4(T, a, b, c) T a, b, c; cin >> a >> b >> c;
#define read5(T, a, b, c, d) T a, b, c, d; cin >> a >> b >> c >> d;

#define init4(T, a, b, val) T a, b; a = val; b = val;
#define init5(T, a, b, c, val) T a, b, c; a = val; b = val; c = val;
#define init6(T, a, b, c, d, val) T a, b, c, d; a = val; b = val; c = val; d = val;

// Data structures
tcT using V = vector<T>;
tcT using S = set<T>;
tcT using MS = multiset<T>;
tcTU using M = map<T, U>;
tcTU using MM = multimap<T, U>;
tcTU using MMg = multimap<T, U, greater<T>>;
template<class T, int count> using A = array<T, count>;

// Shortcuts
#define pb push_back
#define pob pop_back
#define ins insert
#define adv advance
#define sz(x) (int) x.size()
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define when(f) [&](auto x) { return f; }
#define when_adj(f) [&](auto x, auto y) { return f; }
#define when_void(f) [&](auto x) { f; }

// Pairs
#define ii <int, int>
#define ss <string, string>
#define ll <llong, llong>
#define dd <double, double>

#define pi pair<int, int>
#define ps pair<string, string>
#define pl pair<llong, llong>
#define pd pair<double, double>

#define Vi V<int>
#define Vpi V<pi>
#define Vs V<string>
#define Vps V<ps>
#define Vl V<llong>
#define Vpl V<pl>
#define Vd V<double>
#define Vpd V<pd>

#define Mii M<int, int>
#define Mss M<string, string>
#define Mll M<llong, llong>
#define Mdd M<double, double>

// Others
tcT bool Ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
tcT bool Ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

// Integers
tcT bool Odd(T x) { return x % 2 != 0; }
tcT bool Even(T x) { return x % 2 == 0; }
tcT T Parity(T x) { return x % 2; }
tcT T Pairs(T n) { return n * (n - 1) / 2; }
tcT T SumN(T n) { return n * (n + 1) / 2; }
tcT T SumSq(T n) { return n * (n + 1) * (2 * n + 1) / 6; }
tcT T Dist(T r, T l) { return r - l; }
tcT T DistEx(T r, T l) { return r - l - 1; }
tcT T DistIn(T r, T l) { return r - l + 1; }
tcT T PairAvg(T a, T b) { return (a + b) / 2; }

// Conversions
int ToNum(char c) { return int(c - '0'); }
char ToChar(int num) { return char(num + '0'); }
int ToNum(string s) { return stoi(s); }
string ToBString(int num) {
  string bstring;
  while (num > 0) {
    bstring += (num & 1) ? "1" : "0";
    num >>= 1;
  }
  return bstring;
}
int FromBstring(string bstring) { return stoi(bstring, nullptr, 2); }


// Vector
tcT V<T> Psum(V<T> &v) {
  int n = sz(v);
  V<T> psum(n);
  psum[0] = v[0];
  go (1, n - 1) {
    psum[i] = psum[i - 1] + v[i];
  }
  return psum;
}

tcT V<T> Ssum(V<T> &v) {
  int n = sz(v);
  V<T> ssum(n);
  ssum[n - 1] = v[n - 1];
  rep_back (n - 1) {
    ssum[i] = ssum[i + 1] + v[i];
  }
  return ssum;
}

tcT T SumRange(V<T> &psum, int left, int right) {
  return (left == 0 ? psum[right] : psum[right] - psum[left - 1]);
}

tcT T SumAll(V<T> &v) {
  return accumulate(all(v), T(0));
}

tcT bool IsEqIdx(int idx, V<T> &psum, V<T> &ssum) {
  return psum[idx] == ssum[idx];
}

template <class T, class BinaryPredicate>
bool All(const V<T> &v, BinaryPredicate lambda) {
  return std::all_of(all(v), lambda);
}

template <class T, class BinaryPredicate>
bool AllAdj(const V<T> &v, BinaryPredicate lambda) {
  rep (sz(v) - 1) {
    if (!lambda(v[i], v[i + 1]))
      return false;
  }
  return true;
}

template<class T, class UnaryPredicate>
bool Any(const V<T> &v, UnaryPredicate lambda) {
  return std::any_of(all(v), lambda);
}

template<class T, class BinaryPredicate>
bool AnyAdj(const V<T> &v, BinaryPredicate lambda) {
  rep (sz(v) - 1) {
    if (lambda(v[i], v[i + 1]))
      return true;
  }
  return false;
}

template<class T, class UnaryPredicate>
bool None(const V<T> &v, UnaryPredicate lambda) {
  return std::none_of(all(v), lambda);
}

template<class T, class BinaryPredicate>
bool NoneAdj(const V<T> &v, BinaryPredicate lambda) {
  rep (sz(v) - 1) {
    if (lambda(v[i], v[i + 1]))
      return false;
  }
  return true;
}

tcT bool Asc(V<T> &v) {
  return NoneAdj(v, when_adj(x >= y));
}

tcT bool NonAsc(const V<T> &v) {
  return NoneAdj(v, when_adj(x < y));
}

tcT bool Desc(const V<T> &v) {
  return NoneAdj(v, when_adj(x <= y));
}

tcT bool NonDesc(const V<T> &v) {
  return NoneAdj(v, when_adj(x > y));
}

tcT bool Found(const V<T> &v, T x) {
  return std::find(all(v), x) != v.end();
}

tcT int First(const V<T> &v, T t) {
  return First(v, when(x == t)) - v.begin();
}

int First(string &s, char c) {
  each (s) {
    if (s[i] == c) return i;
  }
  return -1;
}

int First(string &s, string t) {
  int n = sz(s);
  int m = sz(t);
  if (m > n) return -1;
  rep (n - m + 1) {
    if (s.substr(i, m) == t) return i;
  }
  return -1;
}

template<class T, class UnaryPredicate>
int First(const V<T> &v, UnaryPredicate lambda) {
  return std::find_if(all(v), lambda) - v.begin();
}

template<class T, class BinaryPredicate>
int FirstAdj(const V<T> &v, BinaryPredicate lambda) {
  each(v) {
    if (lambda(v[i], v[i + 1])) {
      return i;
    }
  }
  return sz(v);
}

tcT int Last(const V<T> &v, T t) {
  return Last(v, when(x == t)) - v.begin();
}

int Last(string &s, char t) {
  each_back(s, c) {
    if (c == t) return i;
  }
  return -1;
}

int Last(string &s, string t) {
  int n = sz(s);
  int m = sz(t);
  if (m > n) return -1;
  rep_back (n - m + 1) {
    if (s.substr(i, m) == t) return i;
  }
  return -1;
}

template<class T, class UnaryPredicate>
int Last(const V<T> &v, UnaryPredicate lambda) {
  each_back(v) {
    if (lambda(v[i])) {
      return i;
    }
  }
  return sz(v);
}

template<class T, class BinaryPredicate>
int LastAdj(const V<T> &v, BinaryPredicate lambda) {
  go_back (sz(v) - 1, 1) {
    if (lambda(v[i - 1], v[i])) {
      return i;
    }
  }
  return sz(v);
}

tcT T Count(const V<T> &v, T x) {
  return std::count(all(v), x); 
}

template<class T, class UnaryPredicate>
T Count(const V<T> &v, UnaryPredicate lambda) {
  return std::count_if(all(v), lambda);
}

template<class T, class BinaryPredicate>
int CountAdj(const V<T> &v, BinaryPredicate lambda) {
  int cnt = 0;
  rep (sz(v) - 1) {
    if (lambda(v[i], v[i + 1])) cnt++;
  }
  return cnt;
}

tcT int MinPos(const V<T> &v) {
  return min_element(all(v)) - v.begin();
}

tcT T Min(const V<T> &v) {
  return *min_element(all(v));
}

tcT void Min(T &first, T &second) {
  first = std::min(first, second);
}

tcT T SecondMin(V<T> &v) {
  init(int, min, second_min, MX);
  each(v) {
    Min(min, v[i]);
    if (v[i] > min) {
      Min(second_min, v[i]);
    }
  }
  return second_min;
}

tcT int MaxPos(const V<T> &v) {
  return max_element(all(v)) - v.begin();
}

tcT T Max(const V<T> &v) {
  return *max_element(all(v));
}

tcT void Max(T &first, T &second) {
  first = std::max(first, second);
}

tcT T SecondMax(V<T> &v) {
  init(int, max, second_max, -1);
  each(v) {
    Max(max, v[i]);
    if (v[i] < max) {
      Max(second_max, v[i]);
    }
  }
  return second_max;
}

tcT T Avg(const V<T> &v) {
  T n = sz(v);
  T sum = Acc(v);
  return sum / n;
}

tcT int Unique(T &v) {
  sort(all(v));
  v.resize(unique(all(v)) - v.begin());
  return sz(v);
}

tcT void RotateLeft(T &v) { std::rotate(v.begin(), v.begin() + 1, v.end()); }
tcT void RotateLeft(T &v, int k) { std::rotate(v.begin(), v.begin() + k, v.end()); }
tcT void RotateRight(T &v) { std::rotate(v.rbegin(), v.rbegin() + 1, v.rend()); }
tcT void RotateRight(T &v, int k) { std::rotate(v.rbegin(), v.rbegin() + k, v.rend()); }
void Rotate(std::vector<int>& v, int left, int right, int moves) {
  if (left > right || moves == 0) return;

  int subarray_size = right - left + 1;
  moves %= subarray_size;
  if (moves == 0) return;

  int shift_right = (moves > 0);
  if (shift_right) {
    moves = subarray_size - moves;
  } else {
    moves = -moves;
  }

  std::reverse(v.begin() + left, v.begin() + left + moves);
  std::reverse(v.begin() + left + moves, v.begin() + right + 1);
  std::reverse(v.begin() + left, v.begin() + right + 1);
}

template<class T> bool CheckBounds(V<T> &v, int idx) {
  return (idx >= 0 && idx < sz(v));
}


// Vector pairs

// 2D vector
tcT pi GetDimensions(V<V<T>> &t) {
  if (sz(t) == 0) return { 0, 0 };
  int n = sz(t);
  int m = sz(t[0]);
  return { n, m };
}

template<class T, class U> bool CheckBounds(T &t, U x, U y) {
  auto [n, m] = GetDimensions(t);
  if (n == 0) return false;

  return (x >= 0 && x < n && y >= 0 && y < m);
}

// Map
tcTU bool KeyFound(M<T, U> &m, T key) {
  return m.find(key) != m.end();
}

// Multimap
tcTU bool KeyFound(MM<T, U> &mm, T key) {
  return mm.find(key) != mm.end();
}

// Strings
void ToUpper(string &s) {
  transform(all(s), s.begin(), ::toupper);
}

void ToLower(string &s) {
  transform(all(s), s.begin(), ::tolower);
}

bool IsPalindrome(string &s) {
  int n = sz(s);
  rep (n / 2) {
    if (s[i] != s[n - 1 - i]) return false;
  }
  return true;
}




// --INPUT--
// Vector
tcT void in(T &v) {
  each(v) cin >> v[i];
}

// Vector pairs
tcT void in(V<pair<T, T>> &v) {
  each(v) cin >> v[i].first >> v[i].second;
}

// Map
template<class T, class U, class Z> void in(M<T, U> &m, Z &v) {
  each(v) m[v[i]]++;
}

// 2D array
tcT void in(V<V<T>> &t) {
  auto [n, m] = GetDimensions(t);
  rep (n) {
    rep (m, j) {
      cin >> t[i][j];
    }
  }
}


// --OUTPUT--
// Basic types
tcT void out(T x) {
  cout << x;
  cout << "\n";
}

// Vector
tcT void out(V<T> &v, bool new_line = false) {
  int n = sz(v);
  each(v) {
    cout << val;
    if (i < n - 1) {
      if (!new_line) cout << " ";
      if (new_line) cout << "\n";
    }
  }
  cout << "\n";
}

// Vector pairs
tcT void out(V<pair<T, T>> &v) {
  each (v) cout << v[i].first << " " << v[i].second << "\n";
}

// 2D array
tcT void out(V<V<T>> &t) {
  auto [n, m] = GetDimensions(t);
  rep (n) {
    rep (m, j) {
      cout << t[i][j];
    }
    cout << "\n";
  }
}

int solve();

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int tt = 1;
  //std::cin >> tt;
  bool lowercase = false;
  bool show_time = true;
  
  auto start_time = chrono::high_resolution_clock::now();
  auto prev_time = start_time;
  while (tt--) {
    int solution = solve();
    if (solution == 1) std::cout << (lowercase ? "Yes" : "YES");
    if (solution == 0) std::cout << (lowercase ? "No" : "NO");
    std::cout << "\n";
    
    if (show_time) {
      auto end_time = chrono::high_resolution_clock::now();
      double time_taken = chrono::duration_cast<std::chrono::nanoseconds>(end_time - prev_time).count();
      time_taken *= 1e-9;
    
      cout << "time = " << fixed << setprecision(9) << time_taken << "s" << std::endl;
      prev_time = end_time;
    }
  }

  return 0;
}


int solve() {
  int n = 10;
  Vi x(n);
  rep (n) {
    x[i] = pos;
  }
  each_back (x) {
    cout << "Val: " << val << "\n";
  }
  
  
  return 42;
}

/* ================= Notes ================== //
   implement support for out function that takes multiple simple variables
*/


















