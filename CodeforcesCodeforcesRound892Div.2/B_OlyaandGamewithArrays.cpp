// time-limit: 1000
// problem-url: https://codeforces.com/contest/1859/problem/B
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
    int t;
    cin >> t;
    int smallest_min = INT_MAX;
    int smallest_second_min = INT_MAX;
    ll second_min_sum = 0;
    while (t--) {
      int n;
      cin >> n;
      int min = INT_MAX;
      int min_pos = -1;
      int second_min = INT_MAX;
      vector<int> v(n);
      for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] < min) {
          min = v[i];
          min_pos = i;
        }
      }
      for (int i = 0; i < n; i++) {
        if (v[i] < second_min && i != min_pos) {
          second_min = v[i];
        }
      }
      smallest_min = std::min(smallest_min, min);
      smallest_second_min = std::min(smallest_second_min, second_min);
      second_min_sum += second_min;
    }
    ll ans = second_min_sum - smallest_second_min + smallest_min;
    cout << ans << '\n';
  }
}
// ================= Notes ==================== //
/*
	  There are n arrays of atleast 2 elements
	  beauty of the list of arrays: the sum of minimums of all arrays
	  they ask me to maximize beauty -> they ask me to maximize minimums in the arrays

	  To have the ability to maximize the beauty I can pick one number from array and place it into another

	  Observations:
	  I can increase minimum of an array if I remove the smallest element
	  I should remove all minimums of each array as that is always benefitial, then place all those mins to the smallest second min (hurts the result the least)

	  the answer should then be: sum of second-min's - smallest second min + smallest min
*/
// ================= Thoughts ================= //
/*
    1. Define terminology - beauty of the arrays
    2. Know what is your goal - maximize beauty -> what does that actually mean - explicitly write it down
    3. Understand what action helps in maximizing the beauty
    4. After that it's about realizing what to do with all those minimums I removed (at that point I must make the answer worse, since I have to use them
       -> so I place them in a way that hurts the beauty the least)
*/

















