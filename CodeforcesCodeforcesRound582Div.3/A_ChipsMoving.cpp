// time-limit: 1000
// problem-url: https://codeforces.com/contest/1213/problem/A

#include <bits/stdc++.h>
using namespace std;
using llong = long long;

#ifdef DEBUG
#include "../template/debug.h"
#else
#define __DEBUG__(x...)
#endif

// Constants
const int MOD = 1e9+7;
const int MX = numeric_limits<int>::max();
const int MN = numeric_limits<int>::min();
const llong MXL = numeric_limits<llong>::max();
const llong MNL = numeric_limits<llong>::min();
const double MXD = numeric_limits<double>::max();
const double MND = numeric_limits<double>::min();

const string dstr ("URDL");
const int dx[4] = { -1, 0, 1, 0 };
const int dy[4] = { 0, 1, 0, -1 };

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
#define Repeat(...)     OVERLOADED_MACRO(Repeat, __VA_ARGS__)
#define RepeatBack(...)     OVERLOADED_MACRO(RepeatBack, __VA_ARGS__)
#define Go(...)     OVERLOADED_MACRO(Go, __VA_ARGS__)
#define GoBack(...)     OVERLOADED_MACRO(GoBack, __VA_ARGS__)
#define Each(...)     OVERLOADED_MACRO(Each, __VA_ARGS__)
#define EachBack(...)     OVERLOADED_MACRO(EachBack, __VA_ARGS__)
#define EachPair(...)     OVERLOADED_MACRO(EachPair, __VA_ARGS__)
#define EachPairBack(...)     OVERLOADED_MACRO(EachPairBack, __VA_ARGS__)
#define Init(...)     OVERLOADED_MACRO(Init, __VA_ARGS__)
#define Read(...)     OVERLOADED_MACRO(Read, __VA_ARGS__)
#define Print(...)     OVERLOADED_MACRO(Print, __VA_ARGS__)
#define PrintSp(...)     OVERLOADED_MACRO(PrintSp, __VA_ARGS__)
#define PrintN(...)     OVERLOADED_MACRO(PrintN, __VA_ARGS__)

// Loops
#define Repeat2(cnt, i) for (auto&& [i, pos] = std::tuple { 0, 1 }; i < cnt; i++, pos++)
#define Repeat1(cnt) Repeat2(cnt, i)

#define RepeatBack2(cnt, i) for (auto&& [i, pos] = std::tuple {cnt - 1, cnt}; i >= 0; i--, pos--)
#define RepeatBack1(cnt) RepeatBack2(cnt, i)

#define Go5(from, to, x, val, i) if (IsValid(x, from) && IsValid(x, to) && from <= to) for (auto&& [it, val, i, pos] = std::tuple{x.begin() + from, x[from], from, from + 1}; it < x.begin() + to + 1; ++it, ++i, ++pos, val = (it < x.begin() + to + 1 ? x[i] : val))
#define Go4(from, to, x, val) Go5(from, to, x, val, i)
#define Go3(from, to, i) for (auto&& [i, pos] = std::tuple{from, from + 1}; i <= to; i++, pos++)
#define Go2(from, to) Go3(from, to, i)

#define GoBack5(from, to, x, val, i) if (IsValid(x, from) && IsValid(x, to) && from >= to) for (auto&& [it, val, i, pos] = std::tuple{x.begin() + from, x[from], from, from + 1}; it != x.begin() + to; --it, --i, --pos, val = (it != x.begin() + to ? x[i] : val))
#define GoBack4(from, to, x, val) GoBack5(from, to, x, val, i)
#define GoBack3(from, to, i) for (auto&& [i, pos] = std::tuple{from, from + 1}; i >= to; i--, pos--)
#define GoBack2(from, to) GoBack3(from, to, i)

#define Each3(x, val, i) if (Size(x) > 0) for (auto&& [it, val, i, pos] = std::tuple{x.begin(), *x.begin(), 0, 1}; it != x.end(); ++it, ++i, ++pos, val = (it != x.end() ? (*it) : val))
#define Each2(x, val) Each3(x, val, i)
#define Each1(x) Each3(x, val, i)

#define EachBack3(x, val, i) if (Size(x) > 0) for (auto&& [it, val, i, pos] = std::tuple{x.rbegin(), *x.rbegin(), Size(x) - 1, Size(x)}; it != x.rend(); ++it, --i, --pos, val = (it != x.rend() ? (*it) : val))
#define EachBack2(x, val) EachBack3(x, val, i)
#define EachBack1(x) EachBack3(x, val, i)

#define EachPair4(x, key, val, i) if (Size(x) > 0) for (auto&& [it, key, val, i, pos] = std::tuple {x.begin(), x.begin()->first, x.begin()->second, 0, 1}; it != x.end(); ++it, ++i, ++pos, key = (it != x.end() ? it->first : key), val = (it != x.end() ? it->second : val))
#define EachPair3(x, key, val) EachPair4(x, key, val, i)
#define EachPair1(x) EachPair4(x, key, val, i)

#define EachPairBack4(x, key, val, i) if (Size(x) > 0) for (auto&& [it, key, val, i, pos] = std::tuple {x.rbegin(), x.rbegin()->first, x.rbegin()->second, Size(x) - 1, Size(x)}; it != x.rend(); ++it, --i, --pos, key = (it != x.rend() ? it->first : key), val = (it != x.rend() ? it->second : val))
#define EachPairBack3(x, key, val) EachPairBack4(x, key, val, i)
#define EachPairBack1(x) EachPairBack4(x, key, val, i)

#define Init4(T, a, b, val) T a, b; a = val; b = val;
#define Init5(T, a, b, c, val) T a, b, c; a = val; b = val; c = val;
#define Init6(T, a, b, c, d, val) T a, b, c, d; a = val; b = val; c = val; d = val;

// Input (basic types)
#define Read2(T, a) T a; cin >> a;
#define Read3(T, a, b) T a, b; cin >> a >> b;
#define Read4(T, a, b, c) T a, b, c; cin >> a >> b >> c;
#define Read5(T, a, b, c, d) T a, b, c, d; cin >> a >> b >> c >> d;

// Output (basic types)
#define Print1(a) PrintReturn(WhenVoid(cout << a << "\n";));

#define Print2(a, b) PrintReturn(WhenVoid(cout << a << b << "\n";));
#define Print3(a, b, c) PrintReturn(WhenVoid(cout << a << b << c << "\n";));
#define Print4(a, b, c, d) PrintReturn(WhenVoid(cout << a << b << c << d << "\n";));

#define PrintSp2(a, b) PrintReturn(WhenVoid(cout << a << " " << b << "\n";));
#define PrintSp3(a, b, c) PrintReturn(WhenVoid(cout << a << " " << b << " " << c << "\n";));
#define PrintSp4(a, b, c, d) PrintReturn(WhenVoid(cout << a << " " << b << " " << c << " " << d << "\n";));

#define PrintN2(a, b) PrintReturn(WhenVoid(cout << a << "\n" << b << "\n";));
#define PrintN3(a, b, c) PrintReturn(WhenVoid(cout << a << "\n" << b << "\n" << c << "\n";));
#define PrintN4(a, b, c, d) PrintReturn(WhenVoid(cout << a << "\n" << b << "\n" << c << "\n" << d << "\n";));

// Data structures
tcT using V = vector<T>;
tcT using S = set<T>;
tcT using MS = multiset<T>;
tcTU using M = map<T, U>;
tcTU using MM = multimap<T, U>;
tcTU using MMg = multimap<T, U, greater<T>>;
template<class T, int count> using A = array<T, count>;
tcT using Q = queue<T>;
tcT using ST = stack<T>;

#define II int, int

#define SS string, string
#define IS int, string
#define SI string, int

#define DD double, double
#define ID int, double
#define DI double, int
#define SD string, double
#define DS double, string

#define LL llong, llong
#define IL int, llong
#define LI llong, int
#define SL string, llong
#define LS llong, string
#define DL double, llong
#define LD llong, double

#define PI pair<int, int>

#define PS pair<string, string>
#define PIS pair<int, string>
#define PSI pair<string, int>

#define PD pair<double, double>
#define PID pair<int, double>
#define PDI pair<double, int>
#define PSD pair<string, double>
#define PDS pair<double, string>

#define PL pair<llong, llong>
#define PIL pair<int, llong>
#define PLI pair<llong, int>
#define PSL pair<string, llong>
#define PLS pair<llong, string>
#define PDL pair<double, llong>
#define PLD pair<llong, double>


// Shortcuts of cpp code
#define pb push_back
#define pob pop_back
#define ins insert
#define fi first
#define se second

// Custom shortcut-functions
#define Size(x) (int) x.size()
#define All(x) x.begin(), x.end()
#define Rall(x) x.rbegin(), x.rend()
#define At(x) [x.first][x.second]
#define Pair(x) { x.first, x.second }
#define When(f) [&](auto x) { return f; }
#define WhenAdj(f) [&](auto x, auto y) { return f; }
#define WhenVoid(f) [&]() { f; }

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

tcT bool CkMin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
tcT bool CkMax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
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

// Strings
void ToUpper(string &s) {
  transform(All(s), s.begin(), ::toupper);
}

void ToLower(string &s) {
  transform(All(s), s.begin(), ::tolower);
}

bool IsPalindrome(string &s) {
  int n = Size(s);
  Repeat (n / 2) {
    if (s[i] != s[n - 1 - i]) return false;
  }
  return true;
}

// Vector
tcT V<T> Psum(V<T> &v) {
  assert(!v.empty());
  
  int n = Size(v);
  V<T> psum(n);
  psum[0] = v[0];
  Go (1, n - 1) {
    psum[i] = psum[i - 1] + v[i];
  }
  return psum;
}

tcT V<T> Ssum(V<T> &v) {
  assert(!v.empty());
  
  int n = Size(v);
  V<T> ssum(n);
  ssum[n - 1] = v[n - 1];
  RepeatBack (n - 1) {
    ssum[i] = ssum[i + 1] + v[i];
  }
  return ssum;
}

tcT T SumRange(V<T> &psum, int left, int right) {
  assert(!psum.empty());
  assert(left >= 0 && right < Size(psum));
  
  return (left == 0 ? psum[right] : psum[right] - psum[left - 1]);
}

tcT T SumAll(V<T> &v) {
  assert(!v.empty());
  
  return accumulate(All(v), T(0));
}

template <class T, class BinaryPredicate>
bool ForAll(const V<T> &v, BinaryPredicate lambda) {
  assert(!v.empty());
  
  return std::all_of(All(v), lambda);
}

template <class T, class BinaryPredicate>
bool ForAllAdj(const V<T> &v, BinaryPredicate lambda) {
  assert(!v.empty());
  
  Repeat (Size(v) - 1) {
    if (!lambda(v[i], v[i + 1]))
      return false;
  }
  return true;
}

template<class T, class UnaryPredicate>
bool ForAny(const V<T> &v, UnaryPredicate lambda) {
  assert(!v.empty());
  
  return std::any_of(All(v), lambda);
}

template<class T, class BinaryPredicate>
bool ForAnyAdj(const V<T> &v, BinaryPredicate lambda) {
  assert(!v.empty());
  
  Repeat (Size(v) - 1) {
    if (lambda(v[i], v[i + 1]))
      return true;
  }
  return false;
}

template<class T, class UnaryPredicate>
bool ForNone(const V<T> &v, UnaryPredicate lambda) {
  assert(!v.empty());
  
  return std::none_of(All(v), lambda);
}

template<class T, class BinaryPredicate>
bool ForNoneAdj(const V<T> &v, BinaryPredicate lambda) {
  assert(!v.empty());
  
  Repeat (Size(v) - 1) {
    if (lambda(v[i], v[i + 1]))
      return false;
  }
  return true;
}

tcT bool Asc(const V<T> &v) {
  assert(!v.empty());
  
  return ForNoneAdj(v, WhenAdj(x >= y));
}

tcT bool NonAsc(const V<T> &v) {
  assert(!v.empty());
  
  return ForNoneAdj(v, WhenAdj(x < y));
}

tcT bool Desc(const V<T> &v) {
  assert(!v.empty());
  
  return ForNoneAdj(v, WhenAdj(x <= y));
}

tcT bool NonDesc(const V<T> &v) {
  assert(!v.empty());
  
  return ForNoneAdj(v, WhenAdj(x > y));
}

tcT bool Found(const V<T> &v, T x) {
  assert(!v.empty());
  
  return std::find(All(v), x) != v.end();
}

tcT int First(const V<T> &v, T t) {
  assert(!v.empty());
  
  return First(v, When(x == t)) - v.begin();
}

int First(string &s, char c) {
  assert(!s.empty());
  
  Each (s) {
    if (s[i] == c) return i;
  }
  return -1;
}

int First(string &s, string t) {
  assert(!s.empty());
  
  int n = Size(s);
  int m = Size(t);
  assert(m <= n);
  
  Repeat (n - m + 1) {
    if (s.substr(i, m) == t) return i;
  }
  return -1;
}

template<class T, class UnaryPredicate>
int First(const V<T> &v, UnaryPredicate lambda) {
  assert(!v.empty());
  
  return std::find_if(All(v), lambda) - v.begin();
}

template<class T, class BinaryPredicate>
int FirstAdj(const V<T> &v, BinaryPredicate lambda) {
  assert(!v.empty());
  
  Each(v) {
    if (lambda(v[i], v[i + 1])) {
      return i;
    }
  }
  return Size(v);
}

tcT int Last(const V<T> &v, T t) {
  assert(!v.empty());
  
  return Last(v, When(x == t)) - v.begin();
}

int Last(string &s, char t) {
  assert(!s.empty());
  
  EachBack (s, c) {
    if (c == t) return i;
  }
  return -1;
}

int Last(string &s, string t) {
  assert(!s.empty());
  
  int n = Size(s);
  int m = Size(t);
  assert(m <= n);
  RepeatBack (n - m + 1) {
    if (s.substr(i, m) == t) return i;
  }
  return -1;
}

template<class T, class UnaryPredicate>
int Last(const V<T> &v, UnaryPredicate lambda) {
  assert(!v.empty());
  
  EachBack (v) {
    if (lambda(v[i])) {
      return i;
    }
  }
  return Size(v);
}

template<class T, class BinaryPredicate>
int LastAdj(const V<T> &v, BinaryPredicate lambda) {
  assert(!v.empty());
  
  GoBack (Size(v) - 1, 1) {
    if (lambda(v[i - 1], v[i])) {
      return i;
    }
  }
  return Size(v);
}

tcT T Count(const V<T> &v, T x) {
  assert(!v.empty()); 
  
  return std::count(All(v), x); 
}

template<class T, class UnaryPredicate>
T Count(const V<T> &v, UnaryPredicate lambda) {
  assert(!v.empty());
  
  return std::count_if(All(v), lambda);
}

template<class T, class BinaryPredicate>
int CountAdj(const V<T> &v, BinaryPredicate lambda) {
  assert(!v.empty());
  
  int cnt = 0;
  Repeat (Size(v) - 1) {
    if (lambda(v[i], v[i + 1])) cnt++;
  }
  return cnt;
}

tcT void Min(T &first, T &second) {
  first = std::min(first, second);
}

tcT int MinPos(const V<T> &v) {
  assert(!v.empty());
  
  return min_element(All(v)) - v.begin();
}

tcT T GetMin(const V<T> &v) {
  assert(!v.empty());
  
  return *min_element(All(v));
}

tcT T GetSecondMin(V<T> &v) {
  assert(Size(v) > 1);

  int n = Size(v);
  int min = v[0];
  int second_min = (v[1] > min ? v[1] : -1);
  Go (1, n - 1) {
    if (v[i] < min) {
      second_min = min;
      Min(min, v[i]);
    }
  }
  return second_min;
}

tcT void Max(T &first, T &second) {
  first = std::max(first, second);
}

tcT int MaxPos(const V<T> &v) {
  assert(!v.empty());
  
  return max_element(All(v)) - v.begin();
}

tcT T GetMax(const V<T> &v) {
  assert(!v.empty());
  
  return *max_element(All(v));
}

tcT T GetSecondMax(V<T> &v) {
  assert(Size(v) > 1);

  int n = Size(v);
  int max = v[0];
  int second_max = (v[1] < max ? v[1] : -1);
  Go (1, n - 1) {
    if (v[i] > max) {
      second_max = max;
      Max(max, v[i]);
    }
  }
  return second_max;
}

tcT T Avg(const V<T> &v) {
  assert(!v.empty());
  
  T n = Size(v);
  T sum = Acc(v);
  return sum / n;
}

tcT int Unique(T &v) {
  assert(!v.empty());
  
  sort(All(v));
  v.resize(unique(All(v)) - v.begin());
  return Size(v);
}

tcT void RotateLeft(T &v) { assert(!v.empty()); std::rotate(v.begin(), v.begin() + 1, v.end()); }
tcT void RotateLeft(T &v, int k) { assert(!v.empty()); std::rotate(v.begin(), v.begin() + k, v.end()); }
tcT void RotateRight(T &v) { assert(!v.empty()); std::rotate(v.rbegin(), v.rbegin() + 1, v.rend()); }
tcT void RotateRight(T &v, int k) { assert(!v.empty()); std::rotate(v.rbegin(), v.rbegin() + k, v.rend()); }
void Rotate(std::vector<int>& v, int left, int right, int moves) {
  assert(!v.empty());
  
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

template<class T> bool IsValid(T &v, int idx) {
  assert(!v.empty());
  
  return (idx >= 0 && idx < Size(v));
}

// Vector pairs

// 2D vector
tcT PI Dimensions(V<V<T>> &t) {
  assert(!t.empty());

  int n = Size(t);
  int m = Size(t[0]);
  return { n, m };
}

PI Dimensions(V<string> &t) {
  assert(!t.empty());

  int n = Size(t);
  int m = Size(t[0]);
  return { n, m };
}

template<class T, class U> bool IsValid(T &t, U x, U y) {
  assert(!t.empty());
  
  auto [n, m] = Dimensions(t);
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

// --INPUT--
// Vector
tcT auto ReadVector(int n) {
  V<T> x(n);
  Repeat (n) cin >> x[i];
  return x;
}

tcT auto ReadPairs(int n) {
  V<T> x(n);
  Repeat (n) cin >> x[i].first >> x[i].second;
  return x;
}

// Map
template<class T, class U, class Z> auto MakeMap(Z &v) {
  M<T, U> m;
  Each(v) m[v[i]]++;
  return m;
}

// 2D array
tcT auto Read2D(T n, T m) {
  auto t = Make2D(n, m);
  Repeat (n) {
    Repeat (m, j) {
      cin >> t[i][j];
    }
  }
  return t;
}

tcT auto Make2D(T n) {
  V<V<T>> t(n);
  return t;
}

tcT auto Make2D(T n, T m) {
  V<V<T>> t(n, V<T>(m));
  return t;
}

tcT auto Make2D(T n, T m, T def) {
  V<V<T>> t(n, V<T>(m, def));
  return t;
}

tcT auto ReadAdjList(T n, T m) {
  auto adj_list = Make2D(n);
  Repeat (m) {
    Read(int, a, b);
    adj_list[a].pb(b);
    adj_list[b].pb(a);
  }
  return adj_list;
}

// --OUTPUT--
int PrintReturn(std::function<void()> lambda) {
  lambda();
  
  return 42;
}

// Vector
tcT int PrintVector(V<T> &v, int from = -1, int to = -1) {
  int n = Size(v);
  if (from != -1) assert(IsValid(v, from));
  if (to != -1) assert(IsValid(v, to));
  
  if (from == -1 && to == -1) {
    Each (v) cout << v[i];
  } else if (from == -1) {
    Go (from, n - 1) cout << v[i];
  } else {
    Go (from, to) cout << v[i];
  }
  
  cout << "\n";
  return 42;
}

tcT int PrintVectorSp(V<T> &v, int from = -1, int to = -1) {
  int n = Size(v);
  if (from != -1) assert(IsValid(v, from));
  if (to != -1) assert(IsValid(v, to));
  
  if (from == -1 && to == -1) {
    Each (v) cout << v[i] << " ";
  } else if (from == -1) {
    Go (from, n - 1) cout << v[i] << " ";
  } else {
    Go (from, to) cout << v[i] << " ";
  }
  
  cout << "\n";
  return 42;
}

tcT int PrintVectorN(V<T> &v, int from = -1, int to = -1) {
  int n = Size(v);
  if (from != -1) assert(IsValid(v, from));
  if (to != -1) assert(IsValid(v, to));
  
  if (from == -1 && to == -1) {
    Each (v) Print(v[i]);
  } else if (from == -1) {
    Go (from, n - 1) Print(v[i]);
  } else {
    Go (from, to) Print(v[i]);
  }

  return 42;
}

// Vector pairs
tcT int PrintPairs(V<pair<T, T>> &v, int from = -1, int to = -1) {
  int n = Size(v);
  if (from != -1) assert(IsValid(v, from));
  if (to != -1) assert(IsValid(v, to));

  if (from == -1 && to == -1) {
    EachPair (v) PrintSp(key, val);
  } else if (from == -1) {
    Go (from, n - 1) PrintSp(v[i].fi, v[i].se);
  } else {
    Go (from, to) PrintSp(v[i].fi, v[i].se);
  }
  
  return 42;
}

// 2D array
tcT int Print2D(V<V<T>> &t) {
  auto [n, m] = Dimensions(t);
  Repeat (n) {
    Repeat (m, j) {
      cout << t[i][j];
    }
    cout << "\n";
  }

  return 42;
}

// Map
tcTU int PrintMap(M<T, U> m) {
  EachPair (m) {
    cout << key << " " << val << "\n";
  }

  return 42;
}


int Solve();

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int tt = 1;
  //std::cin >> tt;
  bool lowercase = false;
  bool show_time = false;
  
  auto start_time = chrono::high_resolution_clock::now();
  auto prev_time = start_time;
  while (tt--) {
    int solution = Solve();
    if (solution == 1) std::cout << (lowercase ? "Yes" : "YES") << "\n";
    if (solution == 0) std::cout << (lowercase ? "No" : "NO") << "\n";
    
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


int Solve() {
  Read(int, n);
  V<int> x = ReadVector<int>(n);
  M<II> map = MakeMap<II>(x);

  int ans = MX;
  EachPair (map, ch1, cnt1) {
    int cur_cnt = 0;
    EachPair (map, ch2, cnt2) {
      if (Odd(abs(ch1 - ch2))) {
        cur_cnt += cnt2;
      }
    }
    SetMin(ans, cur_cnt);
  }
  
  return Print(ans);
}



/* ================= Notes ================== //
   
*/


















