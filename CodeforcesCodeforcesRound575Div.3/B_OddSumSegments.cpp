// time-limit: 3000
// problem-url: https://codeforces.com/contest/1196/problem/B
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
    vector<int> v(n);
    int sum = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      sum += v[i];
      if (sum % 2) {
        ans.push_back(i + 1);
        sum = 0;
      }
    }
    if ((int) ans.size() >= k) {
      if (k > (int) ans.size() && k - (int) ans.size() % 2 == 1) {
        cout << "NO" << "\n";
      } else {
        cout << "YES" << "\n";
        for (int i = 0; i < k - 1; i++) {
          cout << ans[i] << " ";
        }
        cout << n << " ";
        cout << "\n"; 
      }
    } else {
      cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















