// time-limit: 2000
// problem-url: https://codeforces.com/contest/1927/problem/C
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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    std::set<int> set_a;
    std::set<int> set_b;
    for (int i = 0; i < n; i++) {
      if (a[i] <= k) set_a.insert(a[i]);
    }
    for (int i = 0; i < m; i++) {
      if (b[i] <= k) set_b.insert(b[i]);
    }
    int a_op = k / 2;
    int b_op = k / 2;
    vector<bool> vb(k);
    for (int i = 1; i <= k; i++) {
      if (set_a.count(i) && !set_b.count(i)) {
        vb[i - 1] = true;
        a_op--;
      }
      if (!set_a.count(i) && set_b.count(i)) {
        vb[i - 1] = true;
        b_op--;
      }
    }
    bool ans = a_op >= 0 && b_op >= 0;
    for (int i = 0; i < k; i++) {
      if (vb[i] == true) continue;
      int num = i + 1;
      if (!set_a.count(num) && !set_b.count(num)) {
        ans = false;
        break;
      }
      vb[i] = true;
    }
    cout << (ans ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   k / 2 elements from each 'a' and 'b'
   those elements must make 1...k consecutive sequence

   Is it possible for given 'a' and 'b'?

   I need union of two sets I think
*/
















