// time-limit: 2000
// problem-url: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C
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
  //cin >> tt;
  while (tt--) {
    int n, x, y;
    cin >> n >> x >> y;
    int min = std::min(x, y);
    if (n == 1) {
      cout << min << '\n';
      return 0;
    }
    int lo = min; // min time to get the first copy
    int hi = min * n; // max time to get all n copies using the faster machine
    int ans = 0;
    while (lo <= hi) {
      int t = lo + (hi - lo) / 2; // current time
      int copies = int(t / x) + int(t / y);
      if (copies >= n - 1) {
        ans = t;
        hi = t - 1;
      } else {
        lo = t + 1;
      }
    }
    cout << ans + min << '\n';
  }
}
// ================= Notes ==================== //
/*
	  At the start I have a single copy
	  I can use both copiers or only one of them
	  -> both should be always superior

	  Ex.:
	  copies needed in total: 4 + 1 = 5 ... n + 1
	  copies to create: 4 ... n
	  I can make: 1 copy/second in first step with 1 copier ... min(x, y)
	  I can make: 2 copies/second with 2 copiers ...
	  How many copies am I making?
	  LCM(x, y) -> time when both copiers finish
	  LCM / x -> how many copies did 1. copier made
	  LCM / y -> how many copies did 2. copier made

	  Process:
	  1 copy at 0 seconds
	  2 copies at 1 second
	  4 copies at 2 seconds
	  6 copies at 3 seconds -> 6 > 5 (n + 1) -> Done at 3 seconds

	  Solution...
	  At each point in time I know how many copies I am able to make till then
	    Copier 1: time / x;
	    Copier 2: time / y;

	  start time: min(x, y) -> At this time I have 2 copies and can use both copiers
    Total copies at time x -> time / x + time / y
    Copies needed: n - 1 (already made one at the start)
    (Total copies at time x) >= (Copies needed)
    (time / x + time / y) >= n - 1, then f(x) = 1 else f(x) = 0

    What is the max time?
    ie. How long would it take to make n copies using min(x, y)? min(x, y) * n
*/






















