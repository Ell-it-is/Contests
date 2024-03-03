// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1775/A2
// ================= Header ================= //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif

// ================= Solution =============== //


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    string s;
    cin >> s;
    int n = (int) s.size();
    int k = n - 2;
    string a = {s.front()};
    string b = s.substr(1, k);
    string c = {s.back()};
    while (b < a && b < c && k > 0) {
      c = s.substr(k);
      k--;
      b = s.substr(1, k);
    }
    if (k == 0) {
      int k = n - 2;
      string a = {s.front()};
      string b = s.substr(1, k);
      string c = {s.back()};
      while (b > a && b > c) {
        c = s.substr(k);
        k--;
        b = s.substr(1, k);
      }
    }
    cout << a << " " << b << " " << c << "\n";
  }
}
/* ================= Notes ================== //
   b >= a AND b >= c
   b <= a AND b <= c

   string 'b' either starts with more or equal b's or it starts with more or equal a's
*/


















