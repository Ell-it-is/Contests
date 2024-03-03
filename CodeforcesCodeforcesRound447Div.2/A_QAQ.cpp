// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/894/A
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
    string s;
    cin >> s;
    int n = (int) s.size();
    int cnt = 0;
    for (int i = 0; i < n - 2; i++) {
      for (int j = i + 1; j < n - 1; j++) {
        for (int k = j + 1; k < n; k++) {
          if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q') cnt++; 
        }
      }
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















