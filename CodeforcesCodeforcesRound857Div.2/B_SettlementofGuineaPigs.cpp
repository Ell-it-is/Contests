// time-limit: 1000
// problem-url: https://codeforces.com/contest/1802/problem/B
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
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    int ans = 0; // max # cages needed at any point in time
    int total = 0; // total # pigs at the farm
    int cnt = 0; // # pigs before doctor arrived
    for (int x : v) {
      if (x == 1) {
        cnt++;
      } else {
        total += cnt;
        cnt = 0;
      }
      ans = std::max(ans, cnt + (total ? total / 2 + 1 : 0));
    }
    cout << ans << '\n';
  }
}
// ================= Notes ==================== //
/*
	  So I don't actually know the gender of pigs. All I have to do is to account for the worst option.
	  Worst option is: There will be half-half of male-female -> this way I have to buy x cages, where x is maximized
	  x = [male_cnt / 2 (+1)] + [female_cnt / 2 (+1)]

	  if doctor does not arrive -> I cannot know the genders -> I assume I need a new cage for each pig
*/


















