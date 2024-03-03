// time-limit: 1000
// problem-url: https://codeforces.com/contest/1138/problem/A
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
    int n;
    cin >> n;
    vector<vector<int>> t;
    vector<int> w;
    int last;
    cin >> last;
    w.push_back(last);
    for (int i = 0; i < n - 1; i++) {
      int x;
      cin >> x;
      if (x != last) {
        last = x;
        t.push_back(w);
        w.clear();
      }
      w.push_back(x);
    }
    t.push_back(w);

    int max = INT_MIN;
    for (int i = 0; i < (int)t.size(); i++) {
      int left = (i > 0 ? (int)t[i - 1].size() : INT_MIN);
      int mid = (int)t[i].size();
      int right = (i < (int)t.size() - 1 ? (int)t[i + 1].size() : INT_MIN);
      int best = std::max(std::min(left, mid), std::min(mid, right));
      max = std::max(max, best * 2);
    }
    cout << max << '\n';
  }
}
// ================= Notes ==================== //
/*
	Ar likes 2, he wants [cnt(2) == cnt(1)] AND
	                     [1...n / 2 only 1's or only 2's] AND [n / 2...n only of the other type]
	                     Ex.: [1 1 1 2 2 2]

	Ans: max continuous subsegment of Ar conditions

	Continuous subsegment properties:
	- must be of even size
	- max size of the subsegment is bounded by min(max_continuous_cnt(1), max_continuous_cnt(2)) in 't' 
	  -> ans <= min(max_continuous_cnt(1), max_continuous_cnt(2)) * 2
	
*/

























