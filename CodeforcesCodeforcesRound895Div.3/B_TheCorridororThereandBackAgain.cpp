// time-limit: 2000
// problem-url: https://codeforces.com/contest/1872/problem/B
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
    // for each trap I need to know how many past that I can go...
    // actually the first trap should determine my max path I think
    // so find smallest d[i]
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
      int d, s;
      cin >> d >> s;
      v[i] = {d, s};
    }
    int min_k = INT_MAX;
    for (int i = 0; i < n; i++) {
      auto trap = v[i];
      int room = trap.first;
      int x = trap.second;
      int k = 0;
      if (x % 2 == 0) x--;
      int rooms_past = x / 2;
      if (x == 1 || x == 2) rooms_past = 0;
      k = room + rooms_past;
      min_k = std::min(k, min_k);
    }
    cout << min_k << '\n';
  }
}
// ================= Notes ==================== //
/*
	  So let's imagine I am in some room with a trap and it activates the moment I step in
	  the trap will activate after x seconds ->
	  x = 1 -> It activates when I step one right
	  x = 2 -> It activates when I step right and left
	  x >= 3 -> allows me to go past d[i]
	  x = 3 -> I can go 1 room past
	  x = 4 -> I can go 1 room past
	  x = 5 -> I can go 2 rooms past (2 right, 3 back)
	  --> I can go at most x / 2 rooms past d[i] with x seconds
	  to make it 3 rooms past (3 right, 4 back) -> atleast 7 seconds
	  to make it 4 rooms past (4 right, 5 back) -> atleast 9 seconds
*/
// ================= Thoughts ================= //
/*
    
*/

















