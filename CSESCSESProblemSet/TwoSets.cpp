// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1092
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
    vector<int> v(n);
    std::iota(v.begin(), v.end(), 1);
    ll total_sum = std::accumulate(v.begin(), v.end(), 0ll);
    if (total_sum % 2) {
      cout << "NO" << "\n";
    } else {
      cout << "YES" << "\n";
      ll x = total_sum / 2;
      ll sum = 0;
      vector<int> a;
      vector<int> b;
      int i = 0;
      int j = n - 1;
      while (x > 0 && i < n && j >= 0) {
        if (v[j] > x) {
          b.push_back(v[j]);
          j--;
        } else if (v[j] <= x) {
          x -= v[j];
          sum += v[j];
          a.push_back(v[j]);
          j--;
        } else if (v[i] <= x) {
          x -= v[i];
          sum += v[i];
          a.push_back(v[i]);
          i++;
        } else if (v[i] > x) {
          b.push_back(v[i]);
          i++;
        }
      }
      for (int k = i; k <= j; k++) {
        b.push_back(v[k]);
      }
      cout << (int) a.size() << "\n";
      for (int num : a) {
        cout << num << " ";
      }
      cout << "\n";
      cout << (int) b.size() << "\n";
      for (int num : b) {
        cout << num << " ";
      }
      cout << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















