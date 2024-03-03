// time-limit: 2000
// problem-url: https://codeforces.com/contest/1851/problem/C
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
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
      cin >> c[i];
    }
    int last = c.back();
    int cnt_last = 0;
    int first = c.front();
    int cnt_first = 0;
    int i = 0;
    while (i < n && cnt_first < k) {
      if (c[i] == first) cnt_first++;
      i++;
    }
    for (; i < n; i++) {
      if (c[i] == first) cnt_first++;
      if (c[i] == last) cnt_last++;
    }
    bool first_last_same = first == last;
    cout << ((first_last_same && cnt_first >= k) || (cnt_first >= k && cnt_last >= k) ? "YES" : "NO") << '\n';
  }
}
// ================= Notes ==================== //
/*
	  path:
	  - must end at last tile
	  - path is divided into blocks of size k
	  - p % k == 0 (path length must be a multiple of block size)
	  - the colors in adjacent blocks can be the same as current block

	  goal is to get to the LAST tile
	  you start at the FIRST tile
	  you move to the RIGHT
	  I have to use exatly k tiles of the same color (that is one block)
	  Is it enough if the color of last position has block size >= k?

	  Observations:
	  - Block of color of first tile >= k AND Block of color of last tile >= k, else path cannot be created
	  - If block size you stand on is < k, then you cannot get to the end
	  
*/
// ================= Thoughts ================= //
/*
    I came up with the solution and had nice observations, but I was too lazy/impatient and didn't consider all possible input values for my solution
    and there were only few options, so I definitly should atleast think next time whether it's feasible to check all input options in mind/on paper

    I should also learn to use shorter variable names such as cnt1 or c1 instead of cnt_first
    
    1. Understand rules of the game (what can happen, what must be true) -> you do this to create perfect mental model in your mind
    2. Know what is the goal -> to get to the last tile
    3. Since I knew I can jump any number of tiles to the right I could even jump from first to last if they were of the same color
    4. That means the optimal solution was to pass k tiles of the first color and then jump right to the end, where you need to pass exatly k tiles as well
    5. So there are only 2 options, either first == last or first != last, if they are not equal do method above, if they are equal, you just need for first
       tile to be >= k.
*/

















