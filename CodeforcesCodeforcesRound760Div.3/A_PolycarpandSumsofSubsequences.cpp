// time-limit: 1000
// problem-url: https://codeforces.com/contest/1618/problem/A
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
    const int n = 7;
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    sort(b.begin(), b.end());
    int x = b[n - 1];
    vector<int> a(3, 0);
    for (int i = 0; i < n - 3; i++) {
      for (int j = i + 1; j < n - 2; j++) {
        for (int k = j + 1; k < n - 1; k++) {
          if (b[i] + b[j] + b[k] == x) {
            a[0] = b[i];
            a[1] = b[j];
            a[2] = b[k];
          }
        }
      }
    }
    for (int num : a) {
      cout << num << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   find integers x, y, z
   x + y + z = b[n - 1];
   x, y and z all appear in array b
   Find triplet of integers that would satisfy these conditions
*/


















