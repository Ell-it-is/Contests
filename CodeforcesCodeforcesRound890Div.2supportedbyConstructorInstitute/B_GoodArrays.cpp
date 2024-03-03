// time-limit: 1000
// problem-url: https://codeforces.com/contest/1856/problem/B
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
    ll sum = std::accumulate(v.begin(), v.end(), 0ll);
    ll alternative_sum = 0;
    for (int i = 0; i < n; i++) {
      alternative_sum += (v[i] == 1 ? 2 : 1);
    }
    db(sum, alternative_sum);
    cout << (n > 1 && sum >= alternative_sum ? "YES" : "NO") << '\n';
  }
}
// ================= Notes ==================== //
/*
    I am given array 'a' of positive integers
    I can only use positive integers in array 'b'
    
	  No duplicates, even odd lengths (exception: array of length: 1)
	  even: 1 2 3 4
	        4 3 2 1
    odd:  1 2 3
          3 1 2

    Duplicates, even odd lengths, should be possible
    even: add 1, remove 1, add 1, remove 1, ...
    odd: add 1, remove 2, odd 1, ...

    If there is an array of only 1's it's not possible
    
*/
// ================= Thoughts ================= //
/*
    1. I should have noticed the bold text saying that the numbers are positive...
    2. Then, I assumed that I can only use the numbers from arr 'a' to arr 'b', when in reality i could have used ANY POSITIVE numbers.
    3. After this it was also important to observe the case of all 1's where you cannot go down to 0 of course, therefore unable to change numbers and keep the sum.
*/

















