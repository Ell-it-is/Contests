// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1090
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
    int n, x;
    cin >> n >> x;
    vector<int> w(n);
    for (int i = 0; i < n; i++) {
      cin >> w[i];
    }
    std::sort(w.rbegin(), w.rend());
    int cnt = 0;
    int j = n - 1;
    for (int i = 0; i < n && i <= j; i++) {
      if (w[i] < x) {
        int fat = w[i];
        int slim = w[j];
        if (fat + slim <= x) {
          j--;
        }
      }
      cnt++;
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















