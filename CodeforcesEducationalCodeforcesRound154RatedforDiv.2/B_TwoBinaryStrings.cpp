// time-limit: 2000
// problem-url: https://codeforces.com/contest/1861/problem/B
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
    string a, b;
    cin >> a >> b;
    int n = (int) a.size();
    bool ans = false;
    for (int i = 0; i < n - 1; i++) {
      if (a[i] == '0' && b[i] == '0' && a[i + 1] == '1' && b[i + 1] == '1') {
        ans = true;
        break;
      }
    }
    cout << (ans ? "YES" : "NO") << '\n';
  }
}
// ================= Notes ==================== //
/*
	  both strings always start with 0, end with 1
	  Op: choose 0-0 or 1-1 at distinct positions and make all the numbers in between equal to them

	  Is it possible to make s equal to t? (can change characters of both)

	  Template:
	  0XXXXXXX1
	  0YYYYYYY1

	  Observations:
	  I can change arbitraly length of numbers from left to zeros
	  I can change arbitraly length of numbers from rigth to ones

	  Option 1: change to last common 0, then last common 1
	  Option 2: change to last common 1, then last common 0

	  Solution:
	  2 zero's left from 2 one's
*/
// ================= Thoughts ================= //
/*
    
*/

















