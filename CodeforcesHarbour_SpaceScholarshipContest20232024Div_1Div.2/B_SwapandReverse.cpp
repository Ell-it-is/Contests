// time-limit: 1000
// problem-url: https://codeforces.com/contest/1864/problem/B
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
// tc: 10000
// n: 100000
// time(s): 1
// order: O(1), O(logn)
// ================= Solution ================= //


int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string odd = "";
    string even = "";
    for (int i = 1; i <= n; i++) {
      if (i % 2) {
        odd += s[i - 1];
      } else {
        even += s[i - 1];
      }
    }
    std::sort(odd.begin(), odd.end());
    std::sort(even.begin(), even.end());
    if (k % 2) {
      string ans = "";
      int i = 0;
      int j = 0;
      while (i < (int) odd.size() || j < (int) even.size()) {
        if (i < (int) odd.size()) {
          ans += odd[i];
        }
        if (j < (int) even.size()) {
          ans += even[j];
        }
        i++;
        j++;
      }
      cout << ans << '\n';
    } else {
      std::sort(s.begin(), s.end());
      cout << s << '\n';
    }
  }
}
// ================= Notes ==================== //
/*
	1) Swap 2 letters odd length apart: 1 0 1 0 1 0 1 ...
	2) Pick range of letters and reverse them: ahoj -> joha

	Output: lexicographically minimal string
*/
// ================= Thoughts ================= //
/*
    1. Observe that we can swap odd indicies with and only with odd AND even indicies with and only with even using first method
    2. If k (notes the range I can reverse) is odd -> the letter's indicies won't change -> so I can order letters on odd indicies separately from letters on even indicies
    3. If k is even -> we can change parity of any two elements -> we can sort the entire string
*/

















