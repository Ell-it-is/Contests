// time-limit: 1000
// problem-url: https://codeforces.com/contest/1741/problem/B
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
    if (n == 3) {
      cout << -1 << '\n';
    } else if (n == 5) {
      cout << "5 4 1 2 3" << '\n';
    } else {
      vector<int> ans(n);
      for (int i = n; i >= 1; i--) {
        ans[n - i] = i;   
      }
      if (n % 2) std::swap(ans[n / 2 - 1], ans[n / 2]); 
      for (int x : ans) {
        cout << x << " ";
      }
      cout << '\n'; 
    }
  }
}
// ================= Notes ==================== //
/*
	  p[i] cannot be at position i
	  atleast one of p[i - 1] or p[i + 1] neighbours (if they exist) must have value of either p[i]-- or p[i]++
	  Leftmost element has only one neighbour on the right -> p[1] must differ by 1
	  Rightmost element has only one neighbour on the left -> p[n - 2] must differ by 1
	  => Place the highest and lowest elements at the ends should be optimal as they have one neighbour only anyway
	     and since they cannot be at their positions, they should be swapped

	  Even length: (can always be descending)
	  6 5 4 3 2 1

	  Odd length:
	  3 2 1 (-1)
	  5 4 3 2 1 (special case)
	  7 6 4 5 3 2 1
	  9 8 7 5 6 4 3 2 1
*/
// ================= Thoughts ================= //
/*
    
*/

















