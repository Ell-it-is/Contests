// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/702/A
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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int max_length = 1;
    int length = 1;
    for (int i = 1; i < n; i++) {
      if (a[i] > a[i - 1]) {
        length++;
      } else {
        length = 1;
      }
      max_length = std::max(max_length, length);
    }
    cout << max_length << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















