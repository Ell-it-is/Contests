// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc333/tasks/abc333_c
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
    std::set<ll> res;
    for (string i = "1"; (int)i.size() <= 12; i += "1") {
      for (string j = "1"; (int)j.size() <= 12; j += "1") {
        for (string k = "1"; (int)k.size() <= 12; k += "1") {
          ll x = stoll(i);
          ll y = stoll(j);
          ll z = stoll(k);
          res.insert(x + y + z);
        }
      }  
    }
    int cur = 1;
    for (ll num : res) {
      if (cur != n) cur++;
      else {
        cout << num << "\n";
        break;
      }
    }
  }
}
/* ================= Notes ================== //
   
*/
















