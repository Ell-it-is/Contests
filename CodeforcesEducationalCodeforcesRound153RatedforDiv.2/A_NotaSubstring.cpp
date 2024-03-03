// time-limit: 2000
// problem-url: https://codeforces.com/contest/1860/problem/A
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
    string s;
    cin >> s;
    int n = (int) s.size();
    if (s == "()") {
      cout << "No" << '\n';
    } else {
      cout << "Yes" << '\n';
      string t1 = "";
      for (int i = 0; i < n; i++) {
        t1.append("()");
      }
      string t2 = std::string(n, '(') + std::string(n, ')');
      if (t1.find(s) == string::npos) {
        cout << t1 << '\n';
      } else {
        cout << t2 << '\n';
      }
    }
  }
}
// ================= Notes ==================== //
/*
	Valid RBS's:
	(), ()()
	(()), ((()))
	()(()), ()()((()))
*/
// ================= Thoughts ================= //
/*
    1. Understand terminology - Bracket sequence vs Regular bracket sequence
    2. When the task is to find 2n size string I should realize that 2n is always even
    3. Think of the string::find function since the question asks about substring occurence
    4. Think of the case where you cannot find a proper sequence (couldn't do that since I don't know which are proper)
    5. Go and find all possible proper sequences - turns out there are only 2 of those: '()', '(())' + their combinations
        What has to be true for any RBS?
          Must have even number of opened and closed brackets
          You can never close more brackets than you have opened
    6. Therefore '()' on input must always be a substring for any RBS -> the only NO answer
    7. We prepare 2 proper RBS and answer with the one that does not have 's' as a substring 
*/

















