// time-limit: 2000
// problem-url: https://codeforces.com/contest/1863/problem/C
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
// tc: 1
// n: 100000
// time(s): 2
// order: O(1), O(logn), O(n), O(nlogn)
// ================= Solution ================= //


int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    std::set<int> set;
    for (int i = 0; i < n; i++) {
      set.insert(a[i]);
    }
    int miss = -1;
    int j = 0;
    for (auto it = set.begin(); it != set.end(); it++) {
      if (*it != j) {
        miss = j;
        break;
      }
      j++;
    }
    if (miss == -1) {
      miss = n;
    }
    vector<int> b(n + 1);
    b[0] = miss;
    for (int i = 0; i < n; i++) {
      b[i + 1] = a[i];
    }
    vector<int> ans(n + 1);
    for (int i = 0; i < n + 1; i++) {
      int new_pos = (i + k) % (n + 1);
      ans[new_pos] = b[i];
    }
    for (int i = 1; i < n + 1; i++) {
      cout << ans[i] << " ";
    }
    cout << '\n';
  }
}
// ================= Notes ==================== //
/*
	  k times I have to...
	  loop through array and replace each element (left -> right) with MEX of the array
    
	  observations:
	  the numbers in the array are gonna range from 0...n at all time
	  they are always distinct
	  -> the number that is curently missing from 0...n is gonna appear in next iteration
	    -> if I know the number in current iteration, I also know the next one, that is the number I replaced must necessarily be the one missing.
    
    template:
    missing + the rest of the array
*/
// ================= Thoughts ================= //
/*
    
*/

















