// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc176/tasks/abc176_b
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
  //cin >> tt;
  while (tt--) {
    string n;
    cin >> n;
    int sum = 0;
    for (char c : n) {
      sum += int(c - '0');
    }
    cout << ((sum % 3 == 0) ? "Yes" : "No") << "\n";  
  }
}
/* ================= Notes ================== //
   
*/
















