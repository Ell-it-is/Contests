// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1537/C
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
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
      cin >> h[i];
    }
    std::sort(h.begin(), h.end());
    if (n == 2) {
      cout << h[0] << " " << h[1] << "\n";
      continue;
    }
    int pos = -1;
    int min = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
      if (std::abs(h[i] - h[i + 1]) < min) {
        min = std::abs(h[i] - h[i + 1]);
        pos = i + 1;
      }
    }
    for (int i = pos; i < n; i++) {
      cout << h[i] << " ";
    }
    for (int i = 0; i < pos; i++) {
      cout << h[i] << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















