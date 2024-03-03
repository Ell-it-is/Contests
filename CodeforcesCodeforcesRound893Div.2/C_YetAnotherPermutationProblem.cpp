// time-limit: 2000
// problem-url: https://codeforces.com/contest/1858/problem/C
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
    vector<int> v { 1 };
    set<int> set;
    int x = 2;
    int last = x;
    do {
      if (set.count(x) == 0) {
        v.push_back(x);
        set.insert(x);
      }
      x *= 2;
      if (x > n) {
        x = last + 1;
        last = x;
      }
    } while (x <= n && last <= n);
    
    for (int x : v) {
      cout << x << " ";
    }
    cout << '\n';
  }
}
// ================= Notes ==================== //
/*
	  score is the # distinct numbers
	  maximize the score by choosing optimal sequence of numbers from 1 to N

	  How many ways are there to reorder permutation of n numbers?
	  - n! ways

    i % n
    1) For any i in range: 1...n - 1 -> i + 1
      Means gcd of neighbouring elements
    2) For i = n -> 1
      Means gcd of last and first

    if a <= b, then gcd(a, b) can give 1...a

    To find distinct number 3, I need a[i] = 3 and a[i + 1] = multiple of 3 (atleats twice)
    So maybe the answer is to count the # pairs a[i] and 2 * a[i]?

    [my example]
    1 2 4 8 3 6 5 10 7 9

    [original example]
    1 2 3 4 8 5 10 6 9 7
    distinct: 1, 2, 3, 4, 5
*/
// ================= Thoughts ================= //
/*
    1. You see that permutation 1...n is given in input
    2. You know that the question calculates some value 'd' based on position of values of this permutation, therefore order matters
    3. You define for yourself what is the terminology - 'score' that you should obtain
    4. You are asked to maximize that score
    5. You first think about bruteforce -> that is: calculate 'score' based on any possible permutation from 1...n, but of course n is too large, so not possible
    6. So you must find some optimal positions of the numbers, and ideally you want to make pairs of numbers where each next pair creates distinct gcd
    7. You define for yourself gcd and what are the possible results of gcd(a, b)
    8. I found that I can get at best 'a' from gcd(a, b) where a < b iff 'b' is a multiple of 'a'
    9. So I could find distinct values for any 'a' <= 'n / 2'
    10. If I know that I need n values but also want to push_back values into the vector, I can use v.reserve(n) rather than v(n)
*/

















