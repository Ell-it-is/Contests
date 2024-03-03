// time-limit: 2000
// problem-url: https://codeforces.com/contest/1927/problem/A
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int first = s.find_first_of("B");
    int last = s.find_last_of("B");
    cout << last - first + 1 << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















