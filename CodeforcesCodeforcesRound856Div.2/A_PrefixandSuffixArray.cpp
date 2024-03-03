// time-limit: 1000
// problem-url: https://codeforces.com/contest/1794/problem/A
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
    int size = 2 * n - 2;
    vector<string> v(size);
    for (int i = 0; i < size; i++) {
      cin >> v[i];
    }
    if (n == 2) {
      if (v[0] == v[1]) {
        cout << "YES" << '\n';
      } else {
        cout << "NO" << '\n';
      }
      continue;
    }
    std::sort(v.begin(), v.end(), [](const std::string& first, const std::string& second) {  
      return first.size() < second.size();
    });
    string bx = v[size - 1];
    string by = v[size - 2];
    std::reverse(by.begin(), by.end());
    if (bx == by) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
}
// ================= Notes ==================== //
/*
	Find two biggest parts of string s
	Decide which one is the left side and which one is the right side
	Left side -> is the one that can be compared with 2nd greatest one and is
	equal with him in value on each position except the last
    Right side -> the other greatest one
*/


















