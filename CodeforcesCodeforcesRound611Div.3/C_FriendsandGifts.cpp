// time-limit: 2000
// problem-url: https://codeforces.com/contest/1283/problem/C
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
    vector<int> f(n);
    std::set<int> set;
    for (int i = 0; i < n; i++) {
      cin >> f[i];
      set.insert(f[i]);
    }
    std::set<int> give;
    for (int i = 1; i <= n; i++) {
      if (!set.count(i)) give.insert(i);
    }
    for (int i = 0; i < n; i++) {
      int cant = i + 1;
      if (f[i] == 0 && give.count(cant)) {
        for (int num : give) {
          if (num != cant) {
            f[i] = num;
            break;
          }
        }
        give.erase(f[i]);
      }
    }
    for (int i = 0; i < n; i++) {
      if (f[i] == 0) {
        int cant = i + 1;
        for (int num : give) {
          if (num != cant) {
            f[i] = num;
            break;
          }
        }
        give.erase(f[i]);
      }
    }
    for (int num : f) {
      cout << num << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   1) How many f[i] = 0 can there be on input? Any number of zeros could be a valid input.
   2) Whom could f[i] gift to? Any missing f[i] on input except himself.
*/
















