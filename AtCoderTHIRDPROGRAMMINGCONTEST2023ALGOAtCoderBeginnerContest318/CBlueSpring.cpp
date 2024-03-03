// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc318/tasks/abc318_c
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
    ll n, d, p;
    cin >> n >> d >> p;
    ll day_pass = p / d;
    vector<ll> f(n);
    ll normal_cost = 0;
    for (int i = 0; i < n; i++) {
      cin >> f[i];
      normal_cost += f[i];
    }
    ll ex_days = 0;
    for (int i = 0; i < n; i++) {
      if (f[i] > p / d) ex_days++;
    }

    ll batches = ex_days / d; // how many batches I need to pay for the expensive days
    ll batches_cost = batches * p;
    ll free_days = batches * d;
    ll new_cost = 0;
    for (int i = 0; i < n; i++) {
      if (f[i] > p / d && free_days > 0) {
        free_days--;
        continue;
      }
      new_cost += f[i];
    }
    new_cost += batches_cost;
    ll ans = std::min(normal_cost, new_cost);

    batches = ex_days / d + 1; // how many batches I need to pay for the expensive days
    batches_cost = batches * p;
    free_days = batches * d;
    new_cost = 0;
    for (int i = 0; i < n; i++) {
      if (f[i] > p / d && free_days > 0) {
        free_days--;
        continue;
      }
      new_cost += f[i];
    }
    new_cost += batches_cost;

    ans = std::min(ans, new_cost);
    cout << ans << '\n';
  }
}
// ================= Notes ==================== //
/*
	  batch of D one day passes cost P yen
	  -> one pass cost me P / D yen

	  I also know the total cost of the trip without any day passes -> sum of F
	  ...
	  For any day F[i] > P / D it would be worth to have a day pass
	  The question that remains is if I could use all the day passes I bought in a batch... If not I would overpay
	  So just calculate both options and compare?
*/
// ================= Thoughts ================= //
/*
    
*/

















