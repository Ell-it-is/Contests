// time-limit: 2000
// problem-url: https://codeforces.com/contest/1851/problem/B
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
    bool ans = true;
    vector<int> s(v);
    std::sort(s.begin(), s.end());
    for (int i = 0; i < n; i++) {
      if (v[i] % 2 != s[i] % 2) {
        ans = false;
        break;
      }
    }
    cout << (ans ? "YES" : "NO") << '\n';
  }
}
// ================= Notes ==================== //
/*
	Look for invariants: the elements are the same
	Observations:
	- First you should know what is the proper position of each of the elements
	
*/
// ================= Thoughts ================= //
/*
    My intuition was correct but I got confused and I couldn't prove what I mean to say
    1. If question asks whether something is possible it's good to know first what is the possible output to check against
    2. I knew that no odd element can reach position where even elemnt is initially placed (as only even can be exchanged with even and only odd can be exchanged with odd)
    3. Now the solution is quite obvious -> simply check whether parity of input and output matches at each position
*/

















