// time-limit: 1000
// problem-url: https://codeforces.com/contest/1862/problem/A
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
// tc: 100
// n: 400
// time(s): 1
// order: O(1), O(logn), O(n), O(nlogn)
// ================= Solution ================= //


int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    bool found_v = false;
    bool found_i = false;
    bool found_k = false;
    bool found_a = false;
    for (int i = 0; i < m; i++) {    
      for (int j = 0; j < n; j++) {
        char cur = v[j][i];
        if (!found_v) {
          if (cur == 'v') {
            found_v = true;
            break;
          }
          continue;
        }
        if (!found_i) {
          if (cur == 'i') {
            found_i = true;
            break;
          }
          continue;
        }
        if (!found_k) {
          if (cur == 'k') {
            found_k = true;
            break;
          }
          continue;
        }
        if (!found_a) {
          if (cur == 'a') {
            found_a = true;
            break;
          }
          continue;
        }
      }
    }
    if (found_v && found_i && found_k && found_a) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
}
// ================= Notes ==================== //
/*
	  The columns don't have to be next to each other in order to form 'vika'
	  I must look for first column that contains 'v'
	  I must look for second column that contains 'i'
	  ....
	  If I read "vika" before I am out of columns -> yes
*/
// ================= Thoughts ================= //
/*
    
*/

















