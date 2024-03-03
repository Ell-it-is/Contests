// time-limit: 1000
// problem-url: https://codeforces.com/contest/1925/problem/A
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
    string ans = "";
    for (int j = 0; j < n; j++) {
      for (int i = 97; i < 97 + k; i++) {
        char c = char(i);
        ans += c;
      }  
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















