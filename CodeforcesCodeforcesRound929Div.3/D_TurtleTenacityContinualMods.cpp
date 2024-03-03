// time-limit: 2000
// problem-url: https://codeforces.com/contest/1933/problem/D
 
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
  std::cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int min = *min_element(a.begin(), a.end());
    if (std::count(a.begin(), a.end(), min) == 1) {
      cout << "YES" << "\n";
      continue;
    }

    bool ans = false;
    for (int i = 0; i < n; i++) {
      if (a[i] % min != 0) {
        ans = true;
        break;
      } 
    }
    cout << (ans ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   a single one always works -> in general if there is a single smallest element it always works
   two or more ones never work
*/
 