// time-limit: 1000
// problem-url: https://codeforces.com/contest/1842/problem/B
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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> c[i];
    }
    int knowledge = 0;
    int i, j, k;
    i = j = k = 0;
    while (i < n || j < n || k < n) {
      if (knowledge == x) break;
      bool read = false;
      if (i < n && (a[i] | x) == x) {
        knowledge |= a[i++];
        read = true;
      }
      if (j < n && (b[j] | x) == x) {
        knowledge |= b[j++];
        read = true;
      }
      if (k < n && (c[k] | x) == x) {
        knowledge |= c[k++];
        read = true;
      }
      if (!read) break;
    }
    if (knowledge == x) {
      cout << "Yes" << '\n';
    } else {
      cout << "No" << '\n';
    }
  }
}
// ================= Notes ==================== //
/*
	  your knowledge can only increase
	  you cannot possibly check all the options of reading books

	  Possible solution:
	  Try all 3 possible books at top of the shelfs
	  You should read any of the books that don't add bit to the position x has set to 0

	  How do I know that a number has bits set to 1 in more positions than x?
	  - When (x | y) != x  // if y has bits in same places as x, then x | y cannot be anything but x

	  -> Read book iff (x | y) == x
*/
// ================= Thoughts ================= //
/*
    
*/

















