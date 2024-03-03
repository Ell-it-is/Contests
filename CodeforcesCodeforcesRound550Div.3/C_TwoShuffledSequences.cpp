// time-limit: 2000
// problem-url: https://codeforces.com/contest/1144/problem/C
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
    std::sort(a.begin(), a.end());
    int cnt = 1;
    vector<int> incr;
    incr.push_back(a[0]);
    vector<int> decr;
    bool ans = true;
    for (int i = 1; i < n; i++) {
      if (a[i] != a[i - 1]) cnt = 1;
      else cnt++;
      incr.push_back(a[i]);
      if (cnt == 2) {
        decr.push_back(a[i]);
        incr.pop_back();
      } else if (cnt == 3) {
        ans = false;
        break;
      }
    }
    std::sort(decr.rbegin(), decr.rend());
    std::map<int, int> map;
    for (int i = 0; i < n; i++) map[a[i]]++;
    for (auto&& [num, cnt] : map) {
      if (cnt > 2) {
        ans = false;
        break;
      }
    }
    db(incr);
    db(decr);
    if (ans) {
      cout << "YES" << "\n";
      cout << incr.size() << "\n";
      for (int i : incr) cout << i << " ";
      cout << "\n";
      cout << decr.size() << "\n";
      for (int i : decr) cout << i << " ";
      cout << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















