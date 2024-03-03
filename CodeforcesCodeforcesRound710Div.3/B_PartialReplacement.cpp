// time-limit: 2000
// problem-url: https://codeforces.com/contest/1506/problem/B
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int stars = 0;
    for (int l = 0; l < n; l++) {
      if (s[l] == '*') stars++;
    }
    if (stars <= 2) {
      cout << stars << "\n";
      continue;
    }
    int i = 0;
    for (int l = 0; l < n; l++) {
      if (s[l] == '*') {
        i = l;
        break;
      }
    }
    int cnt = 1;
    db(i);
    while (i < n) {
      int j = i + 1;
      int cur_last = -1;
      while (j < n && j - i <= k) {
        if (s[j] == '*') {
          cur_last = j;
        }
        j++;
      }
      if (cur_last == -1) break;
      cnt++;
      db(cur_last);
      i = cur_last;
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   if there is <= stars -> ans is stars
   
*/


















